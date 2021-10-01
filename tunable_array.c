#include<stdio.h>
#include "tune.h"
int main()
{
    extern int size;
    int a[size];
    printf("enter %d elemtnts\n",size);
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("entered elements are:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
