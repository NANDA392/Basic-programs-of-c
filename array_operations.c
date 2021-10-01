#include<stdio.h>
void add_beg(int *);
void add_pos(int *);
void add_end(int *);
void del_beg(int *);
void del_pos(int *);
void del_end(int *);
void disp(int *);
int count;
void add(int *a)
{
    int ch;
    while(1)
    {
    printf("Select:\n1.add begining\n2.add at position\n3.add at the end\n4.return\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            add_beg(a);
            break;
        case 2:
            add_pos(a);
            break;
        case 3:
            add_end(a);
            break;
        case 4:
            return;
    }
    }
}
void del(int *a)
{
    int ch;
    while(1)
    {
    printf("select:\n1.delete at the begining\n2.delete at the position\n3.delete at the end\n4.return\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            del_beg(a);
            break;
        case 2:
            del_pos(a);
            break;
        case 3:
            del_end(a);
            break;
        case 4:
            return;
    }
    }
}
void add_beg(int *a)
{
    int i;
    if(count==5)
    {
        printf(" the array is full\n");
        return;
    }
    for(i=count;i>0;i--)
    {
        a[i]=a[i-1];
    }
    printf("enter the element\n");
    scanf("%d",&a[0]);
    count++;
    disp(a);
}
void add_pos(int *a)
{
    int i,pos;
    if(count==5)
    {
       printf("the array is full\n");
       return;
    }
    printf("enter the position\n");
    scanf("%d",&pos);
    for(i=count;i>pos;i--)
        a[i]=a[i-1];
    printf("enter the element\n");
    scanf("%d",&a[pos]);
    count++;
    disp(a);
}
void add_end(int *a)
{
    if(count==5)
    {

        printf("array is full\n");
        return;
    }
    printf("enter the element\n");
    scanf("%d",&a[count]);
    count++;
    disp(a);
}
void disp(int *a)
{
    int i;
    printf("the elements in the array are:\n");
    for(i=0;i<count;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void del_beg(int *a)
{
    int i;
    if(count==0)
    {
       printf("the array is empty\n");
       return;
    }
    for(i=0;i<count;i++)
        a[i]=a[i+1];
    a[count-1]=0;
    disp(a);
    count--;
}
void del_pos(int *a)
{
    int i,pos;
    if(count==0)
    {
        printf("the array is empty\n");
        return;
    }
    printf("enter the position\n");
    scanf("%d",&pos);
    for(i=pos;i>count;i++)
        a[i]=a[i+1];
    a[count-1]=0;
    count--;
    disp(a);
}
void del_end(int *a)
{
    if(count==0)
    {
        printf("array is empty nothing to delete\n");
        return;
    }
    count--;
    a[count]=0;
    disp(a);
}


int main()
{
    int a[5],ch;
    while(1)
    {
        printf("select:\n1. add\n2.delete\n3.display\n4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                add(a);
                break;
            case 2:
                del(a);
                break;
            case 3:
                disp(a);
                break;
            case 4:
                exit(0);
        }
    }
}

