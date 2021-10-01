#include<stdio.h>
void str_rev(char *str,int b,int l)
{   
    char ch;
    if(b==l)
        return;
    else 
    {
        ch=str[b];
        str[b]=str[l];
        str[l]=ch;
        return str_rev(str,++b,--l);
    }
}
int main()
{
    int len;
    char str[20];
    printf("enter the string\n");
    scanf("%s",str);
    for(len=0;str[len]!='\0';len++);
    str_rev(str,0,len-1);
    printf("string revesed = %s\n",str);
}
