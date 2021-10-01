#include<stdio.h>
int main()
{
    int v=0,c=0,s=0,dig=0,i;
    char str[20];
    printf("enter the string\n");
    gets(str);
    for(i=0;i<str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='O'||str[i]=='u'||str[i]=='i'||str[i]=='I')
            v++;
        else if(str[i]>'a'&&str[i]<='z')
            c++;
        else if(str[i]>='0'&&str[i]<='9')
            dig++;
        else if (str[i]==' ')
            s++;
    }
    printf("number of vowels = %d\nnumber of consonants = %d\nnumber of digits = %d\nnumber of spaces = %d\n",v,c,dig,s);
}
