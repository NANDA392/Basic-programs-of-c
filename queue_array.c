#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
typedef struct queue
{
    node *front;
    node *rear;
}queue;
queue q;
void add();
void del();
void disp_array();
void add_ll(queue *);
void del_ll(queue *);
void disp_ll(queue *);
void use_array();
void use_ll();

int rear=-1,front=-1;
int q1[5];
int main()
{
    int ch;
    while(1)
    {
        printf("Select\n1.using array\n2.using linked list\n3.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                use_array();
                break;
            case 2:
                use_ll();
                break;
            case 3:
                exit(0);
        }
    }
}
void use_array()
{
    int ch;
    while(1)
    {
        printf("Select\n1. add\n2. delete\n 3.disp\n4. return\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                add();
                break;
            case 2:
                del();
                break;
            case 3:
                disp_array();
                break;
            case 4:
                return;
        }
    }
}
void add()
{
    if(rear==4)
    {
        printf("queue is full\n");
        return;
    }
    printf("enter the data\n");
    scanf("%d",&q1[++rear]);
    if(front==-1)
    {
        front++;
    }
}
void del()
{
check: if(front==-1)
    {
        printf("queue is empty\n");
        return;
    }
    if(front<=rear)
    {
        printf("deleted data = %d\n",q1[front++]);
    }
    else 
    {
        front=rear=-1;
        goto check;
    }
    
}
void disp_array()
{
    int i;
    if(front==-1)
    {
        printf("queue is empty\n");
        return;
    }
    for(i=front;i<=rear;i++)
    {
        printf("%d ",q1[i]);
    }
    printf("\n");
}
void use_ll()
{
    int ch;
    q.front=q.rear=NULL;
    while(1)
    {
        printf("Select\n1. add\n2. delete\n3. display\n4. return\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                add_ll(&q);
                break;
            case 2:
                del_ll(&q);
                break;
            case 3:
                disp_ll(&q);
                break;
            case 4:
                return;
        }
    }
}
void add_ll(queue *q)
{
    node *temp=(node *)malloc(sizeof(node));
    if(temp==NULL)
    {
        printf("DMA failed\n");
        return;
    }
    printf("enter the data\n");
    scanf("%d",&temp->data);
    temp->next=NULL;
        if(q->front==NULL)
        {
            q->front=q->rear=temp;
        }
        else
        {
            q->rear->next=temp;
            q->rear=temp;
        }
}
void del_ll(queue *q)
{
    node *temp=q->front;
    if(q->front==NULL)
    {
        printf("queue is empty\n");
        return;
    }
    if(q->front==q->rear)
    { 
        printf("data to be deleted = %d\n",q->front->data);
        free(temp);
        q->front=q->rear=NULL;
    }
    else
    {
        printf("data to be deleted = %d\n",q->front->data);
        q->front=q->front->next;
        free(temp);
    }
}
void disp_ll(queue *q)
{
    node *temp=q->front;
    if(q->front==NULL)

    {
        printf("queue is empty\n");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}


