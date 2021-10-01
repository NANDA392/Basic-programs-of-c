#include<stdio.h>
int main()
{
    int a=10;
    float b=20,c;
    void *p,*q,*r;
    p=&a;
    printf("%d\n",*(int *)p);
    p=&b;
    printf("%f\n",*(float *)p);
  //  r=&c;
   // *r=*p%*q;
  //  printf("%d\n",c);
   // r=&q;
    /*printf("%d\n",a);
    printf("%d\n",*p);
    printf("%u %u %u %u\n",&a,p,*q,**r);
    printf("%d %d %d %d\n",a,*p,**q,***r);*/
}
