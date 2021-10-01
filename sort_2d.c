#include<stdio.h>
void print(int (*p)[3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d  ",p[i][j]);
        printf("\n");
    }
}
int main()
{
    int a[3][3];
    int i,j,k,l,t,count=0,m=0;
    printf("enter the number\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
            l=j+1;
        
            for(k=i;k<3;k++)
            {
                
                for(;l<3;l++)

                {
                    if(a[i][j]>a[k][l])
                    {
                     t=a[i][j];
                     a[i][j]=a[k][l];
                     a[k][l]=t;
                    }
                    count++;
                    //print(a);
                   // printf("\n\n");
                }l=0;
            }
        }
    }
    print(a);
    printf("count = %d\n",count);
}
