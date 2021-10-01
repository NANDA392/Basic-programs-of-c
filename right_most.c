#include<stdio.h>
int main()
{
    char str[20];
    int i;
    printf("enter the string\n");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++);
    printf("the right_most character in %s is = %c\n",str,str[i-1]);
}
