#include<stdio.h>
int main()
{
    int big,i,j;
    int a[5];
    int sec_big=0;
    printf("enter 5 values\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
  big=a[0];
    for(i=0;i<5;i++)
    {
        if(big<a[i])
        {
            sec_big=big;
            big=a[i];
        }
        if(big>a[i]&&sec_big<a[i])
            sec_big=a[i];
    }
    

    printf("biggest = %d\n",big);
    int small=a[0];
    for(i=0;i<5;i++)
        if(small>a[i])
        {
            small=a[i];
        }
    printf("smallest=%d\n",small);
    printf("second biggest=%d\n",sec_big);

}

