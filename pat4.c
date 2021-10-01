#include<stdio.h>
int main()
{
    int l,i,j,k;
    printf("enter the n value\n");
    int n,N;
    scanf("%d",&N);
   // n=(2*N);
    for(k=2*N;k>=1;k=k-2)
    {
        for(i=0;i<=k;i++)
            printf(" ");
        for(j=N;j>=k;j--)
        {
            printf("* ");
        }
        printf("\n");
    }

}

