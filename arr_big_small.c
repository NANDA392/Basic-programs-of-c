#include<stdio.h>
#include"arr_dec_sort.c"
int main()
{
    int n;
    printf("enter the n value\n");
    scanf("%d",&n);
    printf("enter the numbers\n");
    
    int a[n],i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort_dec(a,n);
        printf("biggest = %d\nsmallest = %d\n",a[0],a[n-1]);
}
