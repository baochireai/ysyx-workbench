#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

char* int2string(char* dst,int num){
  char buff[20];
  size_t len=0;
  int ch=num%10+'0';
  buff[len++]=(char)ch;
  num=num/10;
  while(num){
    int ch=num%10+'0';
    buff[len++]=(char)ch;
    num=num/10;
  }
  for(size_t i=0;i<len;i++){
    dst[i]=buff[len-i-1];
  }
  dst[len]='\0';
  return dst;
}

unsigned long m_pow_n(unsigned long m, unsigned long n)
{
    unsigned long i = 0, ret = 1;
    if (n < 0) return 0;
    for (i = 0; i < n; i++)
    {
        ret *= m;
    }
    return ret;
}

int printf(const char *fmt, ...) {
  if(fmt==NULL) return -1;

  int ret_num = 0;
  char* pStr = (char*)fmt;// 指向str
  int ArgIntVal = 0;  // 接收整型
  unsigned long ArgHexVal = 0;// 接十六进制
  char* ArgStrVal = NULL;  // 接收字符型
  double ArgFloVal = 0.0; // 接受浮点型
  unsigned long val_seg = (unsigned long)ArgFloVal;   // 数据切分
  //unsigned long val_temp = 0;  // 临时保存数据
  int cnt = 0;       // 数据长度计数
  va_list pArgs; // 定义va_list类型指针，用于存储参数的地址
  va_start(pArgs, fmt); // 初始化pArgs
  while (*pStr != '\0')
  {
      switch (*pStr)
      {
      case '\t':
          putch(*pStr); ret_num += 4; break;
      case '\r':
          putch(*pStr); ret_num++; break;
      case '\n':
          putch(*pStr); ret_num++; break;
      case '%':
          pStr++;
          // % 格式解析
          switch (*pStr)
          {
          case '%':
              putch('%');// %%，输出%
              ret_num++;
              pStr++;
              break;
          case 'c':
              ArgIntVal = va_arg(pArgs, int);// %c，输出char
              putch((char)ArgIntVal);
              ret_num++;
              pStr++;
              break;
          case 'd':
              // 接收整型
              ArgIntVal = va_arg(pArgs, int);
              if (ArgIntVal < 0)// 如果为负数打印，负号
              {
                  ArgIntVal = -ArgIntVal;// 取相反数

                  putch('-');
                  ret_num++;
              }
              val_seg = ArgIntVal;// 赋值给 val_seg处理数据
              // 计算ArgIntVal长度
              if (ArgIntVal)
              {
                  while (val_seg) {
                      cnt++;
                      val_seg /= 10;
                  }
              }
              else cnt = 1;// 数字0的长度为1

              ret_num += cnt;// 字符个数加上整数的长度

              // 将整数转为单个字符打印
              while (cnt)
              {
                  val_seg = ArgIntVal / m_pow_n(10, cnt - 1);
                  ArgIntVal %= m_pow_n(10, cnt - 1);
                  putch((char)val_seg + '0');
                  cnt--;
              }
              pStr++;
              break;
          case 'o':
              // 接收整型
              ArgIntVal = va_arg(pArgs, int);
              if (ArgIntVal < 0)// 如果为负数打印，负号
              {
                  ArgIntVal = -ArgIntVal;// 取相反数

                  putch('-');
                  ret_num++;
              }
              val_seg = ArgIntVal;// 赋值给 val_seg处理数据
              // 计算ArgIntVal长度
              if (ArgIntVal)
              {
                  while (val_seg) {
                      cnt++;
                      val_seg /= 8;
                  }
              }
              else cnt = 1;// 数字0的长度为1

              ret_num += cnt;// 字符个数加上整数的长度

              // 将整数转为单个字符打印
              while (cnt)
              {
                  val_seg = ArgIntVal / m_pow_n(8, cnt - 1);
                  ArgIntVal %= m_pow_n(8, cnt - 1);
                  putch((char)val_seg + '0');
                  cnt--;
              }
              pStr++;
              break;
          case 'x':
              // 接收16进制
              ArgHexVal = va_arg(pArgs, unsigned long);
              val_seg = ArgHexVal;
              // 计算ArgIntVal长度
              if (ArgHexVal)
              {
                  while (val_seg) {
                      cnt++;
                      val_seg /= 16;
                  }
              }
              else cnt = 1;// 数字0的长度为1

              ret_num += cnt;// 字符个数加上整数的长度
              // 将整数转为单个字符打印
              while (cnt)
              {
                  val_seg = ArgHexVal / m_pow_n(16, cnt - 1);
                  ArgHexVal %= m_pow_n(16, cnt - 1);
                  if (val_seg <= 9)
                      putch((char)val_seg + '0');
                  else
                  {
                      putch((char)val_seg - 10 + 'A');
                  }
                  cnt--;
              }
              pStr++;
              break;
          case 'b':
              // 接收整型
              ArgIntVal = va_arg(pArgs, int);
              val_seg = ArgIntVal;
              // 计算ArgIntVal长度
              if (ArgIntVal)
              {
                  while (val_seg) {
                      cnt++;
                      val_seg /= 2;
                  }
              }
              else cnt = 1;// 数字0的长度为1

              ret_num += cnt;// 字符个数加上整数的长度
              // 将整数转为单个字符打印
              while (cnt)
              {
                  val_seg = ArgIntVal / m_pow_n(2, cnt - 1);
                  ArgIntVal %= m_pow_n(2, cnt - 1);
                  putch((char)val_seg + '0');
                  cnt--;
              }
              pStr++;
              break;
          case 's':
              // 接收字符
              ArgStrVal = va_arg(pArgs, char*);
              ret_num += strlen(ArgStrVal);
              while (*ArgStrVal)
              {
                  putch(*ArgStrVal);
                  ArgStrVal++;
              }

              pStr++;
              break;

          // case 'f':
          //     // 接收浮点型
          //     ArgFloVal = va_arg(pArgs, double);
          //     val_seg = (unsigned long)ArgFloVal;// 取整数部分
          //     val_temp = val_seg;      // 临时保存整数部分数据
          //     ArgFloVal = ArgFloVal - val_seg;// 得出余下的小数部分
          //     // 计算整数部分长度
          //     if (val_seg)
          //     {
          //         while (val_seg) {
          //             cnt++;
          //             val_seg /= 10;
          //         }
          //     }
          //     else cnt = 1;// 数字0的长度为1
          //     ret_num += cnt;// 字符个数加上整数的长度
          //     // 将整数转为单个字符打印
          //     while (cnt)
          //     {
          //         val_seg = val_temp / m_pow_n(10, cnt - 1);
          //         val_temp %= m_pow_n(10, cnt - 1);
          //         putch((char)val_seg + '0');
          //         cnt--;
          //     }
          //     // 打印小数点
          //     putch('.');
          //     ret_num++;
          //     // 开始输出小数部分
          //     ArgFloVal *= 1000000;
          //     // printf("\r\n %f\r\n", ArgFloVal);
          //     cnt = 6;
          //     val_temp = (int)ArgFloVal;// 取整数部分
          //     while (cnt)
          //     {
          //         val_seg = val_temp / m_pow_n(10, cnt - 1);
          //         val_temp %= m_pow_n(10, cnt - 1);
          //         putch((char)val_seg + '0');
          //         cnt--;
          //     }
          //     ret_num += 6;
          //     pStr++;
          //     break;
          default:
              break;
          }


      default:
          putch(*pStr); ret_num++;
          break;
      }
      pStr++;
  }
  va_end(pArgs);// 结束取参数

  return 1;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  size_t len=0,i=0;
  while(fmt[i]!='\0'){
    if(fmt[i]=='%'&&fmt[i+1]=='s'){
      char* str= va_arg(ap, char*); 
      out[len]='\0';
      strcat(out,str);
      len=len+strlen(str);
      i+=2;continue;
    }
    else if(fmt[i]=='%'&&fmt[i+1]=='d'){
      int num=va_arg(ap,int);
      int2string(out+len,num);
      len=len+strlen(out+len);
      i+=2;continue;
    }
    out[len++]=fmt[i];
    i++;
  }
  va_end(ap);
  out[len]='\0';
  return 1;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
