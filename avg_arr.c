#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    int a[n],i,sum=0;
    float avg;
    printf("enter the numbers to calculate average\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=(float)sum/n;
    printf("avg=%.3f\n",avg);
}
        

