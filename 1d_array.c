#include<stdio.h>
int main()
{
    int a[3],i;
    printf("enter 5 values\n");
    for(i=0;i<7;i++)
        scanf("%d",&a[i]);
    for(i=0;i<7;i++)
        printf("%d is stored at %u address\n",a[i],&a[i]);
}
