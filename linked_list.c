#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
node *start;
void add();
void del();
void disp();
node* getnode();
void add_beg(node*);
void add_pos(node*);
void add_end(node *);
void del_beg();
void del_end();
void del_pos();
void linear_search();
void binary_search();
void sequential_sort();
void bubble_sort();
int count=0;
int main()
{
    int ch;
    start=NULL;
    while(1)
    {
        printf("select:\n1.Add\n2.Del\n3.Disp\n4.Linear search\n5.Binary search\n6.sequential sort\n7.Bubble sort\n8.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:add();break;
            case 2:del();break;
            case 3:disp();break;
            case 4:
                   linear_search();
                   break;
            case 5:
                   binary_search();
                   break;
            case 6:
                   sequential_sort();
                   break;
            case 7:bubble_sort();
                   break;
            case 8:
                   exit(0);
        }
    }
}
void add()
{
    node *newnode;
    int ch;
    while(1)
    {
        printf("1.Add degining\n2.Add End\n3.Add position\n4.return\n");
        scanf("%d",&ch);
        if(ch==1||ch==2||ch==3)
            newnode=getnode();
        switch(ch)
        {
            case 1:
                add_beg(newnode);
                break;
            case 2:
                add_end(newnode);
                break;
            case 3:
                add_pos(newnode);
                break;
            case 4:return;
        }
    }
}
node * getnode()
{
    node *temp;
    temp=(node *)malloc(sizeof(node));
    if(temp==NULL)
    {
        printf("DMA failed\n");
        exit(1);
    }
    printf("enter the data\n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    return temp;
}
void add_beg(node *nn)
{
    if(start==NULL)
    {
        start=nn;
        return;
    }
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
        temp=temp->next;

    temp->next=nn;
    disp();
}
void disp()
{    
    count=0;
    node *temp=start;
    if(start==NULL)
    {
        printf("sll is empty\n");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
        printf("\n");



}
void add_pos(node *nn)
{
    node *temp1=start,*temp2;
    int pos,i;
    if(start==NULL)
    {
        start=nn;
        return;
    }
    printf("enter the position lesser than %d\n",count);
    scanf("%d",&pos);
    if(pos>count)
    {
        printf("Invalid position\n");
        return;
    }
    for(i=0;i<pos;i++)
    {
        temp2=temp1;
        temp1=temp1->next;
    }
    temp2->next=nn;
    nn->next=temp1;
    disp();
}
void del()
{
    int ch;
    printf("1.de_beg\n2.del_pos\n3.del_end\n4.return\n");
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
void del_beg()
{
    node *temp=start;
    if(start==NULL)
    {
        printf("sll is empty\n");
        return;
    }
    start=start->next;
    free(temp);
    disp();
}
void del_end()
{
    node *temp1=start,*temp2;
    if(start==NULL)
    {
        printf("sll is empty\n");
        return;
    }
    while(temp1->next!=NULL)
    {
        temp2=temp1;
        temp1=temp1->next;
    }
    temp2=NULL;
    free(temp1);
    disp();
}
void del_pos()
{
    int pos,i;
    node *temp1=start,*temp2;
    if(start==NULL)
    {
        printf("sll is empry\n");
        return;
    }
    printf("enter the position\n");
    scanf("%d",&pos);
    if(pos>count)
    {
        printf("invalid position entered\n");
        return;
    }
    for(i=0;i<pos;i++)
    {
        temp2=temp1;
        temp1=temp1->next;
    }
    temp2->next=temp1->next;
    free(temp1);
    disp();

}
void linear_search()
{
    node *temp;
    int flag=0,s;
    printf("enter the number to search\n");
    scanf("%d",&s);
    for(temp=start;temp!=NULL;temp=temp->next)
    {
        if(temp->data==s)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf(" %d is present in the link list\n",s);
    }
    else
        printf("not found...\n");
}
void binary_search()
{
    node *temp=start;
    int s, flag=0,low=0,high=count-1,mid,i;
    printf("enter the elment to search\n");
    scanf("%d",&s);
    while(low<=high)
    {
        mid=(low+high)/2;
        temp=start;
        for(i=0;i<mid;i++)
            temp=temp->next;
            if(temp->data==s)
            {
                flag=1;
                break;
            }
            else if(temp->data<s)
                low=mid+1;
            else
                high=mid-1;
        
    }
    if(flag==1)
        printf("data found\n");
    else
        printf("not found\n");
}
void sequential_sort()
{
    node *temp1=start,*temp2;
    int i,j,temp;
    for(i=0;i<count-1;i++)
    {
        temp2=temp1->next;
        for(j=i+1;j<count;j++)
        {
            if(temp1->data>temp2->data)
            {
                temp=temp1->data;
                temp1->data=temp2->data;
                temp2->data=temp;
            }
            temp2=temp2->next;
        }
        temp1=temp1->next;
    }
    disp();
}
void bubble_sort()
{
    node *temp1,*temp2;
    int i,j,temp;
    for(i=0;i<count-1;i++)
    {
        temp1=start;
        temp2=temp1->next;
        for(j=0;j<count-(i+1);j++)
        {
            if(temp1->data>temp2->data)
            {
                temp=temp1->data;
                temp1->data=temp2->data;
                temp2->data=temp;
            }
            temp1=temp2;
            temp2=temp1->next;
        }
    }
    disp();
}
