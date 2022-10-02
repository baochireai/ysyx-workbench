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

int printf(const char *fmt, ...) {
  if(fmt==NULL) return -1;
  va_list ap;
  va_start(ap, fmt);
  size_t i=0;
  char *str;
  int num;
  int ch;
  char buff[20]="";
  while(fmt[i]!='\0'){
    switch (fmt[i])
    {
    case '%':
       switch (fmt[++i])
       {
       case 's':
        str=va_arg(ap,char*); 
        putstr(str);
        break;
       case 'd':
        num=va_arg(ap,int);
        int2string(buff,num);
        putstr(buff);
        case 'c':
        ch=va_arg(ap,int);
        putch((char)ch);
        break;
       default:
        break;
       } 
       break;
    default:
      putch(fmt[i]);
      break;
    }
    i++;
  }
  va_end(ap);
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
