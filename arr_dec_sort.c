#include<stdio.h>
void sort_dec(int a[ ],int n)
{int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        if(a[i]<a[j])
        {
            a[i]=a[i]+a[j];
            a[j]=a[i]-a[j];
            a[i]=a[i]-a[j];
        }
    }
}
void sort2d_dec(int a[ ][ ],int n1,int n2)
{
    int i,j,k;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            for(k=j;k<i*j;k++)
            {

        if(a[i][j]<a[j][k])
        {
            a[i][j]=a[i][j]+a[j][k];
            a[j][k]=a[i][j]-a[j][k];
            a[i][j]=a[i][j]-a[j][k];
        }
            }
        }
    }
}
/*int main()
{
    int a[5][5];
    int i,j;
    printf("ente the array elements\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    }
    sort2d_dec(a,5,5);

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            printf("%d",a[i][j]);
        printf("\n");
    }
}*/
