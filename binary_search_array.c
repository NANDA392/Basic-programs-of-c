#include<stdio.h>
#include"get_array_sort.c"
int main()
{
    int a[5],i,j;
    getarray(a,5);
    int flag=0,low=0,high=4,mid,s;
    printf("enter the number to search\n");
    scanf("%d",&s);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==s)
        {
            flag=1;
            break;
        }
        else if(a[mid]<s)
            low=mid+1;
        else
            high=mid-1;
    }
    if(flag==1)
        printf("%d is found at %d\n",s,mid);
    else
        printf(" %d is not found in the list\n",s);
}

