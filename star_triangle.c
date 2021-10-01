#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<6;i++)
    {
            for(k=0;k<6;k++)
            {
                if(k>=((6/2)-i)&&k<=(6/2+i))
                    printf("*");
                else printf(" ");
            }
        
        printf("\n");
        
    }
}

