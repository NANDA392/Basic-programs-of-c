#include<stdio.h>
int a=5;
int main()
{
    if(--a)
    {
        main();
        printf("%d\n",a);
    }
}

