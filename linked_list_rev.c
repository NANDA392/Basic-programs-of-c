#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node ;

node *start=NULL,*start1=NULL;

node* add_end(node *,node *);
void rev();
node* getnode();
void disp(node *);
void add_beg(node *);

int count =0;
int main()
{
    int i;
    node *newnode;
    for(i=0;i<5;i++)
    {
        newnode=getnode();
       start=add_end(newnode,start);
    }
    disp(start);
    rev();
    disp(start1);
}
node * getnode()
{
    node *temp;
    temp=(node *)malloc(sizeof(node));
    if(temp==NULL)
    {
        printf("DMA falied\n");
        exit(1);
    }
    temp->next=NULL;
    printf("enter the data\n");
    scanf("%d",&temp->data);
    return temp;
}
void disp(node *st)
{   node *temp=st;
    count=0;
    printf("entered data\n");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n");
}
void rev()
{

    node *temp=start,*temp2;
    while(count>0)
    {
        temp=start;

        while(temp->next!=NULL)
        {
            temp2=temp;
            temp=temp->next;
        }
        start1=add_end(temp,start1);

        temp2->next=NULL;
        count--;
    }
}
void add_beg(node *nn)
{
    node *temp=start;
    if(start==NULL)
    {
        start=nn;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=nn;
}
node* add_end(node *nn,node *start1)
{
    node *temp=start1;
    if(start1==NULL)
    {
        start1=nn;
        return start1;
   }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=nn;
    return start1;
}

