#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev,*next;
    int data;
};
typedef struct node node;
node *start=NULL;
void add();
void del();
void disp();
node * getnode();
void add_beg(node *);
void add_pos(node *);
void add_end(node *);
void del_beg();
void del_pos();
void del_end();
void disp_rev()
{
    node *temp=start;
    if(start==NULL)
    {
        printf("nothing to display\n");
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}
int main()
{
    int ch;
    while(1)
    {
      printf("enter the choice\n1>Add\n2>Delete\n3>Display\n4>display reverse order\n5>exit\n");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1:
              add();break;
          case 2:
              del();break;
          case 3:
              disp();
              break;
          case 4:
              disp_rev();
              break;
          case 5:
              exit(0);
      }
    }

}
void add()
{
    int ch;
    node *newnode;
    while(1)
    {
    printf("select\n1.add begining\n2.add at position\n3.add at end\n4.return\n");
    scanf("%d",&ch);
    if(ch==1||ch==2||ch==3)
    {
        newnode=getnode();
    }
    
    
    switch(ch)
    {
        case 1:
            add_beg(newnode);
            break;
        case 2:
            add_pos(newnode);
            break;
        case 3:
            add_end(newnode);
            break;
        case 4:
            return;
    }
    }
}
node * getnode()

{
    node *temp=(node *)malloc(sizeof(node));
    if(temp==NULL)

    {
        printf("DMA failed\n");
        exit(1);
    }
    temp->prev=NULL;
    temp->next=NULL;
    printf("enter the data\n");
    scanf("%d",&temp->data);
    return temp;
}
void del()
{
    int ch;
    while(1)
    {
    printf("select\n1.delete at begining\n2.delete at position\n3.delete at end\n4.retuen\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            del_beg();
            break;
        case 2:
            del_pos();
            break;
        case 3:
            del_end();
            break;

        case 4:
            return;
    }
    }
}
void add_beg(node *nn)
{
    if(start==NULL)
    {
        start=nn;
        return;
    }
    start->prev=nn;
    nn->next=start;
    start=nn;
    disp();
}
void add_end(node *nn)
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
    nn->prev=temp;
    temp->next=nn;
    disp();
}
void add_pos(node *nn)
{
    int pos,i;
    node *temp=start;
    if(start==NULL)
    {
        start=nn;
        return;
    }
    printf("enter the position\n");
    scanf("%d",&pos);
    if(pos==0)
    {
        add_beg(nn);
        return;
    }
    for(i=0;i<pos;i++)
    {
        temp=temp->next;
    }
    nn->next=temp;
    nn->prev=temp->prev;
    temp->prev->next=nn;
    temp->prev=nn;
    disp();
}
void disp()
{
    node *temp=start;
    if(start==NULL)
        printf("nothing to display\n");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void del_beg()
{
    if(start==NULL)
    {
        printf("DLL is empty\n");
        return;
    }
    if(start->next==NULL)
    {
        free(start);
        start=NULL;
        disp();
        return;
    }

    node *temp=start;
    start=start->next;
    free(temp);
    disp();
}
void del_end()
{
    if(start==NULL)
    {
        printf("nothing to delete\n");
        return;
    }
    node *temp=start;
    if(temp->next==NULL)
    {
        free(start);
        start=NULL;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->prev->next=NULL;
    free(temp);
    disp();
}
void del_pos()
{
    node *temp=start;
    int i,pos;
    if(start==NULL)
    {
        printf("nothing to delete\n");
        return;
    }
    printf("enter the position\n");
    scanf("%d",&pos);
    for(i=0;i<pos;i++)
    {
        temp=temp->next;
    }
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    free(temp);
    disp();
}





