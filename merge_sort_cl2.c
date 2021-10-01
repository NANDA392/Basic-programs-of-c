#include<stdio.h>
void div(int *,int,int);
void merge_sort(int *,int,int,int);
int main()
{
    int a[10]={1000,27,89,0,12345,5,23,567,6,1};
    int i,low=0,high=9;
    printf("Array elements are:\n");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    div(a,low,high);
    printf("Sorted array elements are:\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void div(int *a,int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        div(a,low,mid);
        div(a,mid+1,high);
        merge_sort(a,low,mid,high);
    }
}
void merge_sort(int *a,int low,int mid,int high)
{
    int i=low,j=mid+1,k=low,temp[10];
    while(i<=mid&&j<=high)
    {
        {
            if(a[i]>a[j])
                temp[k++]=a[j++];
            else 
                temp[k++]=a[i++];
        }
    }
    while(i<=mid)
        temp[k++]=a[i++];
    while(j<=high)
        temp[k++]=a[j++];
    for(i=low;i<=high;i++)
        a[i]=temp[i];
}



