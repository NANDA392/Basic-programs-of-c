#include<stdio.h>
int main()
{
    int i,j,k,len;
    char str[20];
    printf("enter the string\n");
    scanf("%s",str);
    printf("\n entered string is %s \n",str);
    for(len=0;str[len]!='\0';len++);
    for(i=0;str[i]!='\0';i++)
    {


        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j]&&(i!=j))
            {k=j;
                while(str[k]!='\0')
                {
                    str[k]=str[k+1];
                    k++;
                }
                printf("%s\n",str);
               j--; 
            }

        }
    }
    printf("the string with duplicates remove %s\n",str);
}
