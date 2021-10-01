#include<stdio.h>
#include "string_comp.c"
int main()
{
    char a[32][10]={"default","continue","sizeof","return","break","int","float","char","long",
    "double","short","struct","union","void","typedef"};
    char key[10];
    int i,j,k;
    printf("enter the string to check keyword\n");
    scanf("%s",key);
    for(i=0;i<32;i++)
    {
      k=  string_comp(a[i],key);
      if(k==0)
      {
          printf("%s is keyword\n",key);
          break;
      }
    }
    if(k!=0)
        printf("%s is not a keyword\n",key);
}
