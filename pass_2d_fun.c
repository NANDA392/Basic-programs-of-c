#include<stdio.h>
#define r 3
#define c 4
void pass_2d_fun(int *);
int main()
{
    int a[r][c],i,j;
    printf("enter the %d elements\n",r*c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("size=%d\n",sizeof(a));
    printf("%u\n%u\n%u\n%u\n",a,a+1,a+2,a+3);
    printf("%d %d\n",a[0][0],*(*(a+0)+0));
    printf("%u %u\n",a,*(a+1)+2);
    pass_2d_fun(a);
}
void pass_2d_fun(int *p)
{
    printf("%d\n",p[1]);
}
