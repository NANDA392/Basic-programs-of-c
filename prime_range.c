#include<stdio.h>
int main()
{
    int i,k,n1,flag=0,n2;
    printf("enter the n1 and n2 value\n");
    scanf("%d%d",&n1,&n2);
    printf("prime number with in %d to %d are:\n",n1,n2);

for(k=n1;k<=n2;k++)
{ flag=0;

    for(i=2;i<=k/2;i++)
    {
        if(k%i==0)
        {
        flag=1;}
    }
    if(flag==0)
    {
        printf("%d ",k);}
    }printf("\n");
}
