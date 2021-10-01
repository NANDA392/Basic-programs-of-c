#include<stdio.h>
int string_compare(char *p,char *q)
{
    int i,j;
    for(i=0;*(p+i)!='\0'&&*(q+i)!='\0';i++)
    {
        if((*(p+i)>*(q+i))||(*(p+i)<*(q+i)))
        return *(p+i)-*(q+i);
    }
    return 0;
}


