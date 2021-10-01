#include<stdio.h>
#include<ctype.h>
int main(int argc,char *argv[])
{
    char b[argc][15];
    int i,j;
    printf("entered strings are:\n");
    for(i=1;i<argc;i++)
        printf("%d) %s\n",i,argv[i]);
    for(i=1;i<argc;i++)
    {
        for(j=0;argv[i][j]!='\0';j++)
        {
            if(isupper(argv[i][j]))
               b[i][j]= tolower(argv[i][j]);
            else  if(islower(argv[i][j]))
               b[i][j]= toupper(argv[i][j]);
        }
        b[i][j]='\0';
    }
    printf("strings with case toggled are:\n\n");
    for(i=1;i<argc;i++)
        printf("%d) %s\n",i,b[i]);
}
