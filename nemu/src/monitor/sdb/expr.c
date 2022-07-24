#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ=251,TK_NUM_H=254,TK_NUM_X=253,TK_REG=252,
  TK_NEQ=250,TK_AND=249,TK_DEREF=248
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
  {"[0-9]+",TK_NUM_H},//十进制整数
  {"\\-",'-'},
  {"\\*",'*'},
  {"\\/",'/'},
  {"\\(",'('},
  {"\\)",')'},
  {"0x[0-9a-fA-F]+",TK_NUM_X},
  {"[$]+[a-z]*[0-9]*",TK_REG},
  {"!=",TK_NEQ},
  {"&&",TK_AND}
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

static Token tokens[65536] __attribute__((used)) = {};
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
          case TK_REG:
            strncpy(tokens[nr_token].str,substr_start+1,substr_len-1);
            tokens[nr_token++].type=rules[i].token_type;
            break;
          case TK_NUM_H:
          case TK_NUM_X:
            strncpy(tokens[nr_token].str,substr_start,substr_len);
          case '+':
          case '-':
          case '*':
          case '/':
          case '(':
          case ')':
            tokens[nr_token].type=rules[i].token_type;
            nr_token++;
            break;
          default:
            break;
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
bool check_pair(int p,int q){
  char* buffer=(char *)malloc(35000*sizeof(char));
  int length=0;
  while (p<=q)
  {
    int curType=tokens[p++].type;
    if(curType=='('){
      buffer[length++]='(';
    }
    else if(curType==')'){
      if(length==0){
        free(buffer);
        return false;
      } 
      buffer[--length]='\0';
    }
  }
  free(buffer);
  if(length!=0){
    return false;
  }
  return true;
}

bool check_parentheses(int p,int q){
  if(tokens[p].type!='('||tokens[q].type!=')'){
    return false;
  }
  return check_pair(p+1,q-1);
}

unsigned eval(int p, int q,bool *success) {
  if (p > q) {
    printf("eval fails,Bad expression\n");
    *success=false;
    return 0;
  }
  else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
    if(tokens[p].type==TK_NUM_H){
      unsigned num;
      sscanf(tokens[p].str,"%u",&num);
      return num;
    }
    else if(tokens[p].type==TK_NUM_X){
      unsigned num;
      sscanf(tokens[p].str,"%x",&num);
      return num;
    }
    else if(tokens[p].type==TK_REG){
      return isa_reg_str2val(tokens[p].str,success);
    }
    *success=false;
    printf("eval fails,Bad expression\n");
    return 0;
  }
  else if (check_parentheses(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1,success);
  }
  else {
    /* We should do more things here. */
    int op_index=p;
    char buffer[35000]={};
    int length=0,left=p,right=q;
    while(left<=right){
      int curType=tokens[left].type;
      if(length!=0&&buffer[length-1]=='('){
        if(curType==')'){
          buffer[--length]='\0';
        }
        else if(curType=='('){
          buffer[length++]='(';
        }
        left++;
        continue;
      }
      switch (curType)
      {
      case TK_NUM_H:
        break;
      case '+':
      case '-':
        buffer[length++]=curType;
        op_index=left;
        break;
      case '*':
      case '/':
        if(length!=0&&(buffer[length-1]=='+'||buffer[length-1]=='-')) break;
        buffer[length++]=curType;
        op_index=left;
        break;
      case '(':
        buffer[length++]='(';
        break;
      default:
        break;
      }
      left++;
    }
    unsigned val1 = eval(p, op_index - 1,success);
    unsigned val2 = eval(op_index + 1, q,success);

    switch (tokens[op_index].type) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': return val1 / val2;
      default: 
        printf("get main opt error!\n");
        *success=false;
        return 0;
    } 
  }
  return 0;
}


word_t expr(char *e, bool *success) {
  *success=true;
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  for (int i = 0; i < nr_token; i ++) {
    if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type == '(') ) {
      tokens[i].type = TK_DEREF;
    }
  }

  if(!check_pair(0,nr_token-1)){
    *success=false;
    return 0;
  }
  word_t value =eval(0,nr_token-1,success);
  return value;//0 -> false
}