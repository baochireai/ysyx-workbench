#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

char* int2string(char* dst,int num){
  char buff[20];
  size_t len=0;
  while(num){
    int ch=num%10+'0';
    buff[len]=(char)ch;
    num=num/10;
  }
  for(size_t i=0;i<len;i++){
    dst[i]=buff[len-i-1];
  }
  dst[len]='\0';
  return dst;
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
