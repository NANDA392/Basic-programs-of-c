#include<stdio.h>
int main()
{
    int vow=0,space=0,con=0,numb=0,i;
    char str[20];
    printf("enter the string\n");
     scanf("%[^\n]s",str);
   // scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            vow++;
        else if(str[i]>='0'&&str[i]<='9')
            numb++;
        else if(str[i]==' ')
            space++;
        else 
            con++;
    }
    printf("In %s\nvowels = %d\nconsanants = %d\nnumbers = %d\nspace = %d\n",str,vow,con,numb,space);
}
