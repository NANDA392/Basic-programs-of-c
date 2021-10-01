#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter the value\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n;j>i;j--)
        printf(" ");
        for(k=1;k<=i;k++)
            printf("*");

        printf("\n");
    }
}
