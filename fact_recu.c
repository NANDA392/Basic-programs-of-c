#include<stdio.h>
int main()
{
    int n,f;
    printf("enter the number\n");
    scanf("%d",&n);
    f=fact(n);
    printf("factorial of %d is %d\n",n,f);
}
fact(int n)
{
    int res;
    if(n==1)
        return 1;
    else
        res=n*fact(n-1);
    printf("\n %d",res);
    return res;
}
