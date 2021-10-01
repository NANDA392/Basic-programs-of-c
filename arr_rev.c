#include<stdio.h>
void print(int a[ ],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    printf("\n");
}
int main()
{int n;
    printf("enter the n value\n");
        scanf("%d",&n);
    int a[n],b1,i;
    printf("enter the  numbers\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("direct revverse ");
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);
    printf("\n");
    int b[n];
    for(i=0;i<n;i++)
        b[i]=a[n-i-1];
    for(i=n-1;i>=n/2;i--)
    {
        b1=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=b1;
    }
    printf("after rev  ");
    print(a,n);
    print(b,n);
}
