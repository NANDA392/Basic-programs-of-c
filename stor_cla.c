#include<stdio.h>
int a=5
int main()
{
    int a=10;
    {
        printf("%d\n",a);
        int a=2;
        a+=2;
        printf("%d\n",a);
    }
    printf("%d\n",a);
}


