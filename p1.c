#include<stdio.h>
#include"p2.c"
int main()
{
  extern char str1[20];
  printf("str=%s\n",str1);
  int l;
  l=string_len(str1);
  printf("len=%d\n",l);
}
  
