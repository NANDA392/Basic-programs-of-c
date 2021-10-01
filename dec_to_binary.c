#include<stdio.h>
int num;
void binary(int numa)
{int a,i;
    for(i=31;i>=0;i--)
    {
        a=numa&(1<<i);
        if(a==0)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }printf("\n");
}


int main()
{
    char m;
    int pos=0;
    int i,a,z=0,o=0;
    printf("enter the number\n");
    scanf("%d",&num);
    for(i=31;i>=0;i--)
    {
        a=num&(1<<i);
        if(a==0)
        {
            printf("0");
            z++;
        }
        else
        {
            printf("1");
            o++;
        }

    }
    printf("\nnumber of zeros=%d\nnumber of ones=%d\n",z,o);
    printf("enter the option\nset[s]\nclear[c]\ntoggle[t]  [s/c/t]:\n");
    __fpurge(stdin);
    scanf("%c",&m);
    switch(m)
    {
        case 's':
            printf("enter the position\n");
            scanf("%d",&pos);
            a=num|(1<<pos);
            binary(a);
            break;
        
        case 'c':
            printf("enter the position\n");
            scanf("%d",&pos);
            a=num&~(1<<pos);
            binary(a);
            break;
        case 't':
            printf("enter the position\n");
            scanf("%d",&pos);
            a=num^(1<<pos);
            binary(a);
            break;
    }
}

