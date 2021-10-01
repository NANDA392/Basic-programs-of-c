#include<stdio.h>
int main()
{
    int len,i,j,flag;
    char str[20];
    printf("enter the string\n");
    scanf("%s",str);
    for(len=0;str[len];len++);
    for(i=0,j=len-1;i<len/2;i++,j--)
        {
            if(str[i]==str[j])
            {
                flag=1;
            }
            else
            {
                flag=0;
                printf("not a palindrome\n");
                break;
            }
        }
    if(flag==1)
        printf("it is a palindrome\n");
}
