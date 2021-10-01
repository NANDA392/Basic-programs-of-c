#include<stdio.h>
int main()
{
    int num,b[33],i=31,a=0;
    for(i=0;i<=31;i++)b[i]=0;
    printf("enter the number\n");
    scanf("%d",&num);
    a=num;
    int rem,quo;
    while(a>0)
    { 
        rem=a%2;
        if(rem==0)
        {
           // printf("o");
            b[i]=0;
        }

        else
        {
           // printf("1");
            b[i]=1;
        }
        i--;
        a=a/2;
     }int j;
    for(j=0;i<=31;i++,j++)
    {
        a=b[i];
        b[i]=b[31-j];
        b[31-j]=a;
    }
    for(i=0;i<32;i++)
        printf("%d",b[i]);
    printf("\n");
}

