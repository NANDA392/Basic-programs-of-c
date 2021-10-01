#include<stdio.h>
void fib(int n)
{
    int i,t1=0,t2=1,fib;
    printf("1+");
    for(i=0;i<n;i++)
    {
        printf("%d+",fib=t1+t2);
        t1=t2;
        t2=fib;
    }
    printf("\n");
}
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    fib(n);
}
