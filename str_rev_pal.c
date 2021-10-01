#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],rev[20];
    int i,len,j;
    printf("enter the string\n");
    scanf("%s",str);
    for(len=0;str[len]!=0;len++);
    for(i=0;str[i]!='\0';i++)
    {
        rev[len-1-i]=str[i];
    }
    rev[len]='\0';
    printf("reverse string = %s \n",rev);

    for(i=0;i<len/2;i++)
    {
        if(str[i]==str[len-1-i]);
        else
            break;
    }
    if(i==len/2)
        printf("%s is a palindrome\n",str);
    else 
        printf("%s is not a palindrom\n",str);

}

