#include "mmio.h"

#define IO_SPACE_MAX (2 * 1024 * 1024) //映射空间2M


static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;

#define NR_MAP 16

static IOMap maps[NR_MAP] = {};
static int nr_map = 0;

uint8_t* new_space(int size) {
  uint8_t *p = p_space;
  // page aligned;  得到该page首地址
  //按page分配 不满一page分配1page
  size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;//PAGE_SIZE 0x1000 2^12 PAGE_MASK oxfff 即最低12位为1
  p_space += size;
  assert(p_space - io_space < IO_SPACE_MAX);
  return p;
}


void init_map() {
  io_space = (uint8_t *) malloc(IO_SPACE_MAX);//开辟映射目标空间
  assert(io_space);
  p_space = io_space;
}

void free_map(){
  free(io_space);
}

static IOMap* fetch_mmio_map(paddr_t addr) {
  int mapid = find_mapid_by_addr(maps, nr_map, addr);
  return (mapid == -1 ? NULL : &maps[mapid]);
}

/* device interface */
void add_mmio_map(const char *name, paddr_t addr, void *space, uint32_t len, io_callback_t callback) {
  assert(nr_map < NR_MAP);
  maps[nr_map] = (IOMap){ .name = name, .low = addr, .high = addr + len - 1,
    .space = space, .callback = callback };
  Log("Add mmio map '%s' at [" FMT_PADDR ", " FMT_PADDR "]",
      maps[nr_map].name, maps[nr_map].low, maps[nr_map].high);

  nr_map++;
}

/* bus interface */
word_t mmio_read(paddr_t addr, int len) {
  return map_read(addr, len, fetch_mmio_map(addr));
}

void mmio_write(paddr_t addr, int len, word_t data) {
  map_write(addr, len, data, fetch_mmio_map(addr));
}

static void check_bound(IOMap *map, paddr_t addr) {
  if (map == NULL) {
    Assert(map != NULL, "address (" FMT_PADDR ") is out of bound at pc = " FMT_WORD, addr, cpu.pc);
  } else {
    Assert(addr <= map->high && addr >= map->low,
        "address (" FMT_PADDR ") is out of bound {%s} [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
        addr, map->name, map->low, map->high, cpu.pc);
  }
}

//typedef void(*io_callback_t)(uint32_t, int, bool);
static void invoke_callback(io_callback_t c, paddr_t offset, int len, bool is_write) {
  if (c != NULL) { c(offset, len, is_write); }
}

word_t map_read(paddr_t addr, int len, IOMap *map) {
  //printf("map read at 0x%8x,%s\n",addr,map->name);
  assert(len >= 1 && len <= 8);
  check_bound(map, addr);
  paddr_t offset = addr - map->low;//地址偏移
  invoke_callback(map->callback, offset, len, false); //唤醒回调函数 prepare data to read 
  word_t ret = host_read(map->space + offset, len);
  return ret;
}

void map_write(paddr_t addr, int len, word_t data, IOMap *map) {
  assert(len >= 1 && len <= 8);
  check_bound(map, addr);
  paddr_t offset = addr - map->low;
  host_write(map->space + offset, len, data);
  invoke_callback(map->callback, offset, len, true);
}