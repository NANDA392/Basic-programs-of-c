#include<stdio.h>
int fib(int);
int main()
{
    int n,i;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
   printf("%d+ ",fib(i));
    printf("\n");
}
int fib(int n)
{
    int i;
    if(n<=1)
        return 1;
    else
        return (fib(n-1)+fib(n-2));
}
                
