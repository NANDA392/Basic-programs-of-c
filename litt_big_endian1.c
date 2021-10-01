#include<stdio.h>
int main()
{
    int a=0x12,i;
  //  scanf("%x",&a);
   for(i=31;i>=0;i--)
   {
       if(a&(1<<i))
           printf("1 ");
       else printf("0 ");
   }
}
                                                                                                                                                                      
