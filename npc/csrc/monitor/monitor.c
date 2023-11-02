#include "monitor.h"

#define NR_CMD ARRLEN(cmd_table)

void init_regex();

static char *img_file = NULL;
static char *diff_so_file = NULL;
static char *log_file = NULL;
static int difftest_port = 1234;
void init_wp_pool();

int npc_state=NPC_STOP;

static long load_img() {
  if (img_file == NULL) {
    printf("No image is given. Use the default build-in image.\n");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  if(fp==NULL){
    printf("Can`t open ImgFile.\n");
    return 4096;
  }

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(CONFIG_MBASE), size, 1, fp);//将镜像程序读取到指定内存地址
  assert(ret == 1);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:", table, NULL)) != -1) {
    switch (o) {
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg;break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_device(){
  init_map();
  init_vga();
  init_i8042();
}

void init_monitor(int argc,char** argv){
  /**初始化存储和IMG**/
  init_mem();
  parse_args(argc,argv);
  long img_size=load_img();
  init_cpu_exec(argc,argv);
#ifdef CONFIG_DIFFTEST 
  init_difftest(diff_so_file, img_size, difftest_port);
#endif
  init_regex();
  init_wp_pool();
  init_device();
}