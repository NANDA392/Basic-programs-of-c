#include<stdio.h>
int main(int c,char *m[])
{
    int i,j,count=1;
    for(i=1;i<c;i++)
        printf("%s\n",m[i]);
    if(m[1][0]=='0')
    {
        printf("count=%d\n",count);
        return 0;
    }
    else
    for(i=1;i<c;i++)
    {  
        for(j=0;m[i][j]!='\0';j++)
        {
            if(m[i][j]!='0')
            {
                count++;
            }
            else break;
        }
        if(m[i][j]=='0')
            break;

    }
    
     printf("count = %d\n",count-1);
}

