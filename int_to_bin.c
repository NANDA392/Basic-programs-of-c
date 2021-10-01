#include<stdio.h>
//printf("Hello Nanda Kumar\n");
int main()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    int c=a, b,i;
    for(i=31;i>=0;i--)
    {

       if((c&(1<<i))==0)
            printf("0 ");
        else printf("1 ");
    }
    printf("\n");
}

    
