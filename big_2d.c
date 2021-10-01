#include<stdio.h>
#define r 3
#define c 4
int main()
{
    int a[r][c],i,j,big,small,sec_big=0;
    printf("enter %d elements of 2d array\n",r*c);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    big=a[0][0];
    small=big;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(big<a[i][j])
            {
                sec_big=big;
                big=a[i][j];
            }
            else if(sec_big<a[i][j]&&big>a[i][j])
                sec_big=a[i][j];
            if(small>a[i][j])
                small=a[i][j];
        }
    }
    printf("biggest=%d\nsecond biggest=%d\nsmallest=%d\n",big,sec_big,small);
}
