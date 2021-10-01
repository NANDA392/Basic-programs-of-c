# include<stdio.h>
#include<stdlib.h>
int top=-1;
void push(int *st)
{
    if(top==4)
    {
        printf("stack overflow\n");
        return;
    }
    printf("enter the data\n");
    scanf("%d",&st[++top]);
}
void pop(int *st)
{
    if(top==-1)
    {
        printf("stack underflow\n");
        return;
    }
    printf("data = %d\n",st[top--]);
}
void disp(int *st)
{
    int i;
    if(top==-1)
    {
        printf("stack underflow\n");
        return;
    }
    for(i=top;i>=0;i--)
    {
        printf("%d ",st[i]);
    }
    printf("\n");
}
int main()
{
    int stack[5],ch;
    while(1)
    {
        printf("select:\n1. push\n2. pop\n3. disp\n.4.exit\n");
        scanf("%d",&ch);
        switch(ch)

        {
            case 1:
                push(stack);
                break;
            case 2:
                pop(stack);
                break;
            case 3:
                disp(stack);
                break;
            case 4:
                exit(0);
        }
    }
}

        

