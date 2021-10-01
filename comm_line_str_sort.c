#include<stdio.h>
#include"string_compare.c"
#include"string_swap.c"
#include"string_copy.c"
int main(int argc,char *argv[])
{
    int i,j;
    char temp[argc][20];
    for(i=1;i<argc;i++)
    {
        string_copy(temp[i-1],argv[i]);
    }
    printf("\n");
    for(i=0;i<argc-1;i++)
    {
        for(j=i+1;j<argc-1;j++)
        {
            if(string_compare(temp[i],temp[j])>0)
            {
                string_swap(temp[i],temp[j]);
            }
        }
    }
    printf("the sorted strings\n");
    for(i=0;i<argc-1;i++)
        printf("%s  ",temp[i]);
    printf("\n");
}
                    
        


