#include<stdio.h>
#define size 5
int main()
{
    int i,j,temp,a[size]= {10,0,5,15,2};
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorted elements are:\n");
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
    printf("\n");
}
