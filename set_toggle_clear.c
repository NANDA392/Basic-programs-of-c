#include<stdio.h>
int main()
{
    int num,a[32]={0};
    int i,pos;
    char ch;
    printf("enter the number\n");
    scanf("%d",&num);
    for(i=31;i>=0;i--)
    {
        if((num&1<<i)!=0)
            a[i]=1;
        else a[i]=0;
    }
    printf("%d in binary\n",num);
        for(i=31;i>=0;i--)
            printf("%d ",a[i]);
    printf("\n");
    
   printf("enter the choice\nset(s)  clear(c) toggle(t)\n:\n");
   __fpurge(stdin);
        scanf("%c",&ch);
    printf("enter the pos\n");
    scanf("%d",&pos);
        switch(ch)
        {
            case 's':
                    printf("set\n");
                    a[pos]|=1;
                    goto print;
            case 'c':
                    printf("clear\n");
                    a[pos]&=0;
                    goto print;
            case 't':
                    printf("toggle\n");
                    a[pos]^=1;
                    goto print;
        }
print:for(i=31;i>=0;i--)
          printf("%d ",a[i]);
      printf("\n");
}
    
