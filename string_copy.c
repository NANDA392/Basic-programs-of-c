#include<stdio.h>
void string_copy(char *p,char *q)
{
    int i;
    char temp;
    for(i=0;*(q+i)!='\0';i++)
    {
        *(p+i)=*(q+i);
    }
    *(p+i)='\0';
}
/*int main()
{
    char str1[]="nanda",str2[]="kumar";
    string_copy(str1,str2);
    printf("%s %s\n",str1,str2);
}*/
