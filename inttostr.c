#include<stdio.h>
int main()
{
    int n,i=0,a,j;
    char str[20],t;
    printf("enter the number\n");
    scanf("%d",&a);
   // a=n;
 
    for(i=0;a>0;i++)
    {
       // i=a%10;
       // printf("%d\n",i);
        str[i]=a%10+'0';
       // printf("char %c\n",str[i]);
        a=a/10;
       // i++;
    }

    str[i]='\0';
    for(i--,j=0;i>0;j++,i--)
    {
        t=str[i];
        str[i]=str[j];
        str[j]=t;
    }
    printf("the string is %s\n",str);
}
        
