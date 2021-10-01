#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,n1;
    char *p;
    printf("1st size\n");
    scanf("%d",&n);
    n=n+2;
    p=(char *)calloc(n,sizeof(char));
    printf("enter the first name\n");
    scanf("%s",p);
    for(i=0;p[i]!='\0';i++);
    p[i]=' ';
    p[++i]='\0';
    printf("2nd size\n");
    scanf("%d",&n1);
    p=(char *)realloc(p,(n+n1)*sizeof(char));
    printf("enter the second name\n");
    scanf("%s",&p[i]);
    printf("full name=%s\n",p);
    free(p);
}
