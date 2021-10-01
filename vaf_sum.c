#include<stdio.h>
#include<stdarg.h>
void sum(int,...);
int main()

{
    int res=0;
    sum(2,10,20);

    sum(5,10,20,30,40,50);
}
void sum(int c,...)
{
    int sum=0,a[c],i;
    va_list v;
    va_start(v,c);
    for(i=0;i<c;i++)
    {
        a[i]=va_arg(v,int);
        printf("%d+ ",a[i]);
        sum=sum+a[i];
    }
    printf("sum=%d\n",sum);
}


