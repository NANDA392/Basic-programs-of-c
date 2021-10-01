#include<stdio.h>
#define size 5
int main()
{
    int a[size]={50,30,20,0,100};
    int i,j,temp;
    printf("array elements before sorting are\n");
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
    printf("\n");
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-(i+1);j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted elements are:\n");
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
    printf("\n");
}
