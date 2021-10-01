#include<stdio.h>
int* fun()
{
   static  int a[3][10]={{1,2,3,4,5,6},{1,2,3,4,5,6}};
    return (int *) a;
}
int main()
{
    int (*p)[10];



    int*  (*p1)();
    
    
    
    p1=fun;

    p=(*p1)();


   // p=fun();
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<10;j++)
    printf("%d",p[i][j]);
        printf("\n");
    }
}
