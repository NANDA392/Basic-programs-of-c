#include<stdio.h>
int main()
{
    int i,j;
    char a[5][15];
    printf("enter the names\n");
    for(i=0;i<5;i++)
    {
        printf("%d. ",i+1);
        scanf("%s",&a[i]);
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;a[i][j]!='\0';j++)
        {
            if(a[i][j]>='A'&&a[i][j]<='Z')
                a[i][j]=a[i][j]+32;
            else if(a[i][j]>='a'&&a[i][j]<='z')
                a[i][j]=a[i][j]-32;
        }
    }
    for(i=0;i<5;i++)
    {
    printf("%s",a[i]);
    printf("\n");
    }
}
