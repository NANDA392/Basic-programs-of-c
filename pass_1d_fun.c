#include<stdio.h>
void pass_1d_func(int *);
int main()
{
    int a[5],i;
    printf("enter the array elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%u%u\n",a,a+1);
    pass_1d_fun(a);
    printf("%d%d",a[2],a[3]);
}
void pass_1d_fun(int *p)
{
    int i;
    printf("%u%u",p,p+1);
    for(i=0;i<5;i++)
    {
        printf("%d\n",*p);
        break;
    //    p++;
    }
    p=2;
    printf("%u%u\n",p,p+1);
//    p[2]=4;
  //  p[3]=78;
}
