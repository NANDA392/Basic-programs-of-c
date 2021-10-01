#include<stdio.h>
void quick_sort(int *,int,int);
int split(int *,int,int);
int main()
{
    int a[10]={20,100,30,0,55,45,78,98,32,67};
    int i,low=0,high=9;
    printf("array elements before sorting\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    quick_sort(a,low,high);
    printf("sorted array:\n");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
}
int split(int *a,int low,int high)
{
    int pivot,p,q,temp;
    pivot=a[low];
    p=low+1;
    q=high;
    while(q>=p)
    {
        while(a[p]<pivot)
            p++;
        while(a[q]>pivot)
            q--;
        if(q>p)
        {
            temp=a[p];
            a[p]=a[q];
            a[q]=temp;
        }
    }

  temp=a[low];
  a[low]=a[q];
  a[q]=temp;
  return q;
}

void quick_sort(int *a,int low,int high)
{
    int pivot_pos;
    if(low<high)
    {
        pivot_pos=split(a,low,high);
        quick_sort(a,low,pivot_pos-1);
        quick_sort(a,pivot_pos+1,high);
    }
}
