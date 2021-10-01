#include<stdio.h>
int main()
{
    int n,i,j;
    printf("ente the number\n");
    scanf("%d",&n);
    j=n;
    for(i=0;i<3;i++)
    {
        if((j%i)!=0)
        {
            i=1;
            break;
        }
        else 
            j=j/i;
    }
    if(ii==1)
        printf("%d is not a perfect cube\n",n);
    else printf("%d is a pefect cube\n",n);
}
