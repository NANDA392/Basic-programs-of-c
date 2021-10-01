#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,count=1,*temp;
    int ch;


    temp=(int *)calloc(count,sizeof(int));
    if(temp==NULL)
    {
        printf("DMA failed\n");
        exit(1);
    }
    printf("enter the data\n");
    scanf("%d",temp);
    while(1)
    {

     printf("enter 1  to add 0 delete \n");
     scanf("%d",&ch);
     switch(ch)
     {
         case 1:
             temp=(int *)realloc(temp,(++count)*sizeof(int));
             printf("enter the data\n");
             scanf("%d",&temp[count-1]);
             break;
         case 0:
             count--;
         //   trave=&(temp[count]);
          //   free(trave);
             temp=(int *)realloc(temp,(count)*sizeof(int));
             break;
         default:
             printf("elemnts in the array are:\n");
             for(i=0;i<count;i++)
                 printf("%d ",temp[i]);
             printf("\n");
     }
    }
}


