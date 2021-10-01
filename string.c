#include<stdio.h>
char str_len(char str[10])
{
    printf(" in function %s\n",str);
    return str[10];
}
int main()
{
    char str1[10],str2[20];
    printf("enter the string\n");
    gets(str1);
    gets(str2);
    int k;
    k=strcmp(str1,str2);
    printf("%d\n",k);
    
}

