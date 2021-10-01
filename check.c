#include <stdio.h>
int c;
void fun(int a,int b)
{
    static int c=67;
    printf("%d + %d = %d\n",a,b,a+b);
}
//#define a_(b) fun(a,b)
    int main()
{
    int a = 10;
    fun(a,7);
//    a=-3*-12/5;
    printf("%d\n",c);
}
/*
int main()
{
   // float a=123.35;
   // double b=123.35;
   // int b=a;
   // a=a-b;
   //printf("a=%f,,b=%d,,,a=%f\n",a,b,a);
   int x=10;
   printf("%d %d %d %d \n",++x,x++,x,x++);
   printf("%d %d %d %d \n",x++,x,x++,++x);

}*/

