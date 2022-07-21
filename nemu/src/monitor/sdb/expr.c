#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ,TK_NUM_H=255

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces  +:匹配1次或多次  
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
  {"[\\-]?[0-9]+",TK_NUM_H},//十进制整数
  {"\\-",'-'},
  {"\\*",'*'},
  {"\\/",'/'},
  {"\\(",'('},
  {"\\)",')'}
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    //regcomp 将预定的正则表达式规则（rules[i].regex）编译到 pattern buffer（re[i]）
    //编译后 为后续 regexec() 提供搜索匹配规则
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);//REG_EXTENDED： Extend 正则表达式
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];//value  how to deal with buffer overflow?
} Token;//record prased toke

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      //使用regcomp编译成的pattern buffer规则(re[i]) 进行匹配搜索 see man regex
      // pmatch 记录匹配到的位置 pmatch.rm_eo:匹配到的字串后第一个字符的偏移量  pmatch[i].rm_so:第i个匹配的起始字符偏移量
      //int regexec(const regex_t *preg, const char *string, size_t nmatch,regmatch_t pmatch[], int eflags);
      //nmatch: 匹配的子串数目 
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        
        // if(rules[i].token_type==TK_NOTYPE) continue;
        // tokens[nr_token].type=rules[i].token_type;
        // if(rules[i].token_type==TK_NUM_H){
        //   strcpy(tokens[nr_token].str,substr_start,substr_len);
        // }
        // nr_token++;

        // spaces空格不需记录
        //大部分token只要记录类型就可以了, 例如+, -, *, /, 但这对于有些token类型是不够的 比如整数
        switch (rules[i].token_type) {
          case TK_NOTYPE:
            break;
          case '+':
          case '-':
          case '*':
          case '/':
          case '(':
          case ')':
            tokens[nr_token++].type=rules[i].token_type;
            break;
          case TK_NUM_H:
            tokens[nr_token].type=rules[i].token_type;
            strncpy(tokens[nr_token].str,substr_start,substr_len);
            nr_token++;
            break;
          default: TODO();
        }

        break;
      }
    }

    if (i == NR_REGEX) {//No token matched
    //when too long, ^ may indicate wrong position
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  TODO();

  return 0;
}
