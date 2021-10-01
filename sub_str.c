#include<stdio.h>
int main()
{
    char str[20],sstr[10];
    printf("enter the string\n");
    scanf("%s",str);
    int i=0,j;
    printf("enter the sub string to check\n");
    scanf("%s",sstr);

    for(i=0,j=0;str[i]!='\0'&&sstr[j]!='\0';i++)
    { 
        if(sstr[j]==str[i])
        {
            j++;
        }
        else 
            j=0;
    }
    printf("%d\n",j);
    for(i=0;sstr[i]!='\0';i++);
   // printf("%d\n",i);
    (i==j)?printf("%s is a sub-string of %s\n",sstr,str):printf("%s is not sub-string of %s\n",sstr,str);
}
        

      
        

