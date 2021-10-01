#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
node *stack;
void init_stack(node **);
void push(node **);
void pop(node **);
void disp(node **);

int main()
{
    int ch;
    init_stack(&stack);
    while(1)
    {
        printf("select:\n1. push\n2. pop\n3. display\n4. exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                push(&stack);
                break;
            case 2:
                pop(&stack);
                break;
            case 3:
                disp(&stack);
                break;
            case 4:
                exit(0);
        }
    }
}
void init_stack(node **temp)
{
    *temp=NULL;
}
void push(node **top)
{
    node *temp=(node *)malloc(sizeof(node));
    printf("enter the data\n");
    scanf("%d",&temp->data);
    temp->next=*top;
    *top=temp;
}
void pop(node **top)
{
    node *temp=*top;
    if(temp==NULL)
    {
        printf("stack underflow\n");
        return;
    }
    printf("data= %d\n",(*top)->data);
    *top=(*top)->next;
    free(temp);
}
void disp(node **top)
{
    node *temp=*top;
    if(*top==NULL)
    {
        printf("stack underflow\n");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
