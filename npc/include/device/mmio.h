#ifndef __MMIO_H__
#define __MMIO_H__

#include "common.h"
#include "memory.h"

#define CONFIG_FB_ADDR 0xa1000000
#define CONFIG_VGA_CTL_MMIO 0xa0000100


typedef void(*io_callback_t)(unsigned int, int, bool);

typedef struct {
  const char *name;
  // we treat ioaddr_t as paddr_t here
  paddr_t low;//映射的起始地址
  paddr_t high;//映射的终止地址
  void * space;//目标空间
  io_callback_t callback;//回调函数
} IOMap;//IO映射管理

#define PAGE_SHIFT        12
#define PAGE_SIZE         (1ul << PAGE_SHIFT)
#define PAGE_MASK         (PAGE_SIZE - 1)

uint8_t* new_space(int size) ;
void init_map();
void free_map();
static inline bool map_inside(IOMap *map, paddr_t addr) {
  return (addr >= map->low && addr <= map->high);
}

static inline int find_mapid_by_addr(IOMap *maps, int size, paddr_t addr) {
  int i;
  for (i = 0; i < size; i ++) {
    if (map_inside(maps + i, addr)) {
      //difftest_skip_ref();
      return i;
    }
  }
  return -1;
}

void add_mmio_map(const char *name, paddr_t addr, void *space, uint32_t len, io_callback_t callback) ;

word_t mmio_read(paddr_t addr, int len) ;

void mmio_write(paddr_t addr, int len, word_t data) ;

word_t map_read(paddr_t addr, int len, IOMap *map) ;

void map_write(paddr_t addr, int len, word_t data, IOMap *map) ;

#endif