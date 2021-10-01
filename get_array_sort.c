#include<stdio.h>
void getarray(int *a,int size)
{
    
    int i,j;
    printf("enter the elements of array\n");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
}
/*int main()
{
    int a[10];
    getarray(a,10);
    int i;
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
}*/

