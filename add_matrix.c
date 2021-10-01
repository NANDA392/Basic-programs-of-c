#include<stdio.h>
void print(int  *);
int main()
{
    int a[3][3],b[3][3];
    int i,j,k;
    printf("enter the elements of 1st matrix of size 3x3\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    printf("enter the elements of 2nd  matrix of size 3x3\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    printf("addition of matrix\n");
    int add[3][3],sub[3][3],mul[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            add[i][j]=a[i][j]+b[i][j];
            sub[i][j]=a[i][j]-b[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                mul[i][j]=

    print(add);
    printf("subtrction of amtrix\n");
    print(sub);
    printf("multiplication of matrix\n");
    print(mul);
}
void print(int *p)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d  ",*p++);
        printf("\n");
    }
}



