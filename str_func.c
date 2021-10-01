#include<stdio.h>
char str1[20];
int str_int(char str1[20])
{
    int i,l=0;
    for(i=0;str1[i]!='\0';i++)
        l=l*10+(str1[i]-48);
    return l;
}

int string_len(char str[20])
{
    int len=0;
    for(len=0;str[len]!='\0';len++);
    // printf("length of string (%s) is %d\n",str,len);
    return len;
}
void string_cpy(char stra[20],char strb[20])
{   
  char str1[20];
    int i;
    for(i=0;i<stra[i]!='\0';i++)
        str1[i]=stra[i];
    for(i=0;strb[i]!='\0';i++)
    {
        stra[i]=strb[i];
    }stra[i]='\0';
    printf("string 1=%s\n",stra);
} 
void string_ncpy(char str1[20], char str2[20])
{int n,l;
  char stra[20];
    int i;
    for(i=0;i<stra[i]!='\0';i++)
        stra[i]=str1[i];
     l=string_len(str2);
    printf("enter the number of character to copy\n");
 rep: scanf("%d",&n);
    //  printf("%d\n",n);
     if(n>l)
      {
      printf("enter a valid number with in %d\n",l);
      goto rep;
      }
    for(i=0;i<n;i++)
        str1[i]=str2[i];
    str1[i]='\0';
    printf("the new string1=%s\n",str1);

}
void string_cmp(char str1[20],char str2[20])
{
    int a,b;
    a=str_int(str1);
    b=str_int(str2);
    if(a==b)
    printf("the strings are equal\n");
    else
    a>b?printf("str1 is greater\n"):printf("str2 is greater\n");
}
void string_cat(char str1[20],char str2[20])

{
    int l1,l2,i,j;
    l1=string_len(str1);
    printf("l1=%d\n",l1);
     l2=string_len(str2);
    char str[l1+l2];
    for(i=0;str1[i]!='\0';i++)
     str[i]=str1[i];
    for(i=l1,j=0;str2[j]!='\0';i++,j++)
        str[i]=str2[j];
        str[i]='\0';
    printf("after concatenation str1=%s\n",str);


}

int main()
{
    int i,l;
    char str2[20];
    printf("enter the string1 and string2\n");
    scanf("%s",str1);
    __fpurge(stdin);
    scanf("%s",str2);
    printf("\n string operations\n");
wh:  while(1)
     {
         printf("\n\n");

         printf("enter the operation\n1.length\n2.copy\n3.copy n char\n4.compare\n5.concatenate\n6.exit\n");
         scanf("%d",&i);
         switch(i)
         {
             case 1:
                 l= string_len(str1);
                 printf("length of string (%s) is %d\n",str1,l);
                 break;
             case 2:
                 string_cpy(str1,str2);
                 break;
             case 3:
                 string_ncpy(str1,str2);
                 break;
             case 4:
                 string_cmp(str1,str2);
                 break;
             case 5:
                 string_cat(str1,str2);
                 break;
        case 6:
           exit(0);
        default:goto wh;
    }
    }
}
