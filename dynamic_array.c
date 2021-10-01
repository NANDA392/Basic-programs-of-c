#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *temp;
    int n,n1,i;
    printf("enter the number elements you want to enter\n");
    scanf("%d",&n);
    temp=(int *)malloc(n*sizeof(int));
    if(temp==NULL)
    {
        printf("DMA failed\n");
        exit(1);
    }
    printf("enter the data\n");
    for(i=0;i<n;i++)
        scanf("%d",&temp[i]);
    printf("entert number of elements you want to add further\n");
    scanf("%d",&n1);
    temp=(int *)realloc(temp,(n+n1)*sizeof(int));
    if(temp==NULL)
    {
        printf("DMA failed\n");
        exit(1);
    }
    printf("enter the %d elments to be included\n",n1);
    for(i=n;i<n+n1;i++)
        scanf("%d",&temp[i]);
    printf("All elements in the array are:\n");
    for(i=0;i<n+n1;i++)
        printf("%d ",temp[i]);
}

