#include<stdio.h>
int main()
{
    int a[3][4],b[4][3];
    int i,j,k;
    printf("enter %d elements of the array\n",3*4);
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);
    printf("the reverse order of the matrix\n");
    for(i=2;i>=0;i--)
    {
        for(j=3;j>=0;j--)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("transpose of the original matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
           // k=a[i][j];
           // a[i][j]=a[j][i];
            b[j][i]=a[i][j];
        }
    }
    for(i=0;i<4;i++)
        {
            for(j=0;j<3;j++)
                {
                    printf("%d  ",b[i][j]);
                }
            printf("\n");
        }
}

