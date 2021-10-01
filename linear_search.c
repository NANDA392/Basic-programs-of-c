#include<stdio.h>
int main()
{
    int a[5]={10,25,5,63,45};
    int i,flag=0,num;
    printf("enter the number\n");
    scanf("%d",&num);
    for(i=0;i<5;i++)
    {
        if(a[i]==num)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("%d found at pos %d\n",num,i);
    else
        printf("NOT FOUND\n");
}
