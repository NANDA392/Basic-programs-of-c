#include<stdio.h>
void print(char p[])
{
    int i;
    for(i=0;p[i]!='\0';i++)
    {
        printf("%c\n",p[i]);
     }
}
int main()
{
 char a[5][10]={"nanda","kumar"};
 int i;
  for(i=0;i<1;i++)
   {
    print(a[i]);
   }
}
