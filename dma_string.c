#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,n1;
    char *p;
    printf("enter the size of first name\n");
    scanf("%d",&n);
    p=(char *)calloc(n,sizeof(char));
    printf("enter the first name char by char \n");
    for(i=0;i<n;i++)
    {
    __fpurge(stdin);
        scanf("%c",&p[i]);
    }
    p[i]=' ';
    p[i+1]='\0';
    printf("first name=%s\n",p);
    printf("enter the size of second name\n");
    scanf("%d",&n1);
    p=(char *)realloc(p,(n1+n+1)*sizeof(char));
    printf("enter second name\n");
    for(i=n+1;i<(n+n1+1);i++)
    {
        __fpurge(stdin);
        scanf("%c",&p[i]);
    }
    p[i]='\0';
    printf("full name=%s\n",p);
    free(p);
}
