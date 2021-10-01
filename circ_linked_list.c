#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    char name[20];
    struct node *next;
}node ;
node *start=NULL;
int i=1;
node * getnode()
{
    node *temp=(node *)malloc(sizeof(node));
    if(temp==NULL)
    {
        printf("DMA failed\n");
        exit(1);
    }
    printf("enter the name for the node\n");
    scanf("%s",temp->name);
    temp->data=i++;
    temp->next=NULL;
    return temp;
}
void circ(node *nn)
{
    node *temp=start;
    if(start==NULL)
    {
        start=nn;
        start->next=start;
        return;
    }
    while(temp->next!=start)
    {
        temp=temp->next;
    }
    nn->next=start;
    temp->next=nn;
}
void disp()
{
    node *temp=start;
    do
    {
        printf("name= %s number= %d\n ",temp->name,temp->data);
        temp=temp->next;
    }while(temp!=start);
}

void josephus()
{
    node *temp;
    int pos,i;
    printf("enter the position\n");
    scanf("%d",&pos);
    while(start->next!=start)
    {
        for(i=0;i<pos-1;i++)
        {
            start=start->next;
        }
        temp=start->next;
        start->next=temp->next;
        free(temp);
    }
    printf("safest name=%s number=%d\n",start->name,start->data);
}


int main()
{
    int ch;
    node *temp;
    printf("Select:\n1. add node\n2. stop adding node\n");
    scanf("%d",&ch);
    while(ch==1)
    {
        temp=getnode();
        circ(temp);
        printf("Select:\n1. add node\n2. stop adding node\n");
        scanf("%d",&ch);
    }
    disp();
    josephus();
}


