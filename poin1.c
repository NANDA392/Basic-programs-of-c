#include<stdio.h>
int main()
{
    int a[10],r;
    int *p,*t;
    p=&a[2];
    t=&a[3];
 //   r=t-p;
    printf("%d\n",r);
    printf("%u\n",p);
//    ++*p;
    printf("%u\n",t);
    printf("%u\n",p);
}

