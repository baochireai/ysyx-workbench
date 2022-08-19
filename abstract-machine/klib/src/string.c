#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t len=0;
  while (s[len]!='\0') len++;
  return len;
}

char *strcpy(char *dst, const char *src) {
  size_t len=0;
  while (src[len]!='\0')
  {
    dst[len]=src[len];
    len++;
  }
  dst[len]='\0';
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  size_t i;

  for (i = 0; i < n && src[i] != '\0'; i++)
      dst[i] = src[i];
  for ( ; i < n; i++)
      dst[i] = '\0';

  return dst;
}

char *strcat(char *dst, const char *src) {
  size_t i=0,dstlen=strlen(dst);
  while (src[i]!='\0'){
    dst[dstlen+i]=src[i];
  }
  dst[dstlen+i]='\0';
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  size_t i=0;
  while(s1[i]!='\0'&&s2[i]!='\0'){
    if(s1[i]<s2[i]) return -1;
    else if(s1[i]>s2[i]) return 1;
    i++;
  }
  if(s1[i]=='\0'&&s2[i]=='\0') return 0;
  else if(s1[i]=='\0') return -1;
  else return 1;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  size_t i=0;
  for(;i<n;i++){
    if(s1[i]=='\0'&&s2[i]=='\0') return 0;
    else if(s1[i]=='\0') return -1;
    else return 1;
    if(s1[i]!=s2[i]) return s1[i]-s2[i];
  }
  return 0;
}

void *memset(void *s, int c, size_t n) {
  for(size_t i=0;i<n;i++){
    *(char*)(s+i)=c;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
	void* ret = dst;
	assert(src && dst);
	if (dst < src)
	{
		while (n--)
		{
			*(char*)dst = *(char*)src;
			dst = (char*)dst + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (n--)	
		{
			*((char*)dst+n) = *((char*)src + n);
		}
	}
	return ret;
}

void *memcpy(void *out, const void *in, size_t n) {
	void* ret = out;
	assert(in && out);

	while (n--)
	{
		*(char*)out = *(char*)in;
		out = (char*)out + 1;
		in = (char*)in + 1;
	}
	return ret;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  size_t i=0;
  for(;i<n;i++){
    if(*(char*)(s1+i)!=*(char*)(s2+i)) return *(char*)(s1+i)-*(char*)(s2+i);
  }
  return 0;
}

#endif
