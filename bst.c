#include<stdio.h>
#include<stdlib.h>

typedef struct btree
{
    struct btree *lc;
    int data;
    struct btree *rc;
}btree;
btree *root;
void insert(btree **,int);
void disp(btree **);
void Inorder(btree **);
void Preorder(btree **);
void Postorder(btree **);

int main()
{
    int ch,data;
    btree *temp,*parent;
    root=NULL;
    while(1)
    {
        printf("\nselect:\n\n1. Insert\n2. Display\n3. Search\n4. Delete\n5. xit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("enter the data to be inserted\n");
                scanf("%d",&data);
                insert(&root,data);
                break;
            case 2:
                disp(&root);
                break;
            case 3:
                printf("enter the data to be searched\n");
                scanf("%d",&data);
                search(&root,data,&flag,&temp,&parent);
                if(flag==1)
                    printf("%d is found \n",data);
                else 
                    printf("%d is not found\n");
                break;
            case 4:
                printf("enter data to be deleted\n");
                scanf("%d ",&data);
                delete(&root,data);
                break;
            case 5:
                exit(0);
        }
    }
}


void insert(btree **r,int data)
{
    if(*r==NULL)
    {
        *r=(btree *)malloc(sizeof(btree));
        (*r)->data=data;
        (*r)->rc=(*r)->lc=NULL;
        return;
    }
    if(data<(*r)->data)
        insert(&(*r)->lc,data);
    else
        insert(&(*r)->rc,data);
}
void disp(btree **r)
{
    int ch;
    if(*r==NULL)
    {
        printf("Empty\n");
        return;
    }
    while(1)
    {
        printf("\nselect:\n\n1. Inorder\n2. Preorder\n3. Postorder\n4. Return\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                Inorder(&root);
                break;
            case 2:
                Preorder(&root);
                break;
            case 3:
                Postorder(&root);
            case 4:
                return;
        }
    }
}
void Inorder(btree **r)
{
    if(*r==NULL)
        return;
    Inorder(&(*r)->lc);
    printf("%d ",(*r)->data);
    Inorder(&(*r)->rc);
//    printf("\n");
}

void Preorder(btree **r)
{
    if(*r==NULL)
        return;
    printf("%d ",(*r)->data);
    Preorder(&(*r)->lc);
    Preorder(&(*r)->rc);
  //  printf("\n");
}
void Postorder(btree **r)
{
    if(*r==NULL)
        return;
    Postorder(&(*r)->lc);
    Postorder(&(*r)->rc);
    printf("%d ",(*r)->data);
   // printf("\n");
}
void search(btree **r,int search,int *f,btree **t,btree **f)
{
    btree *temp=*r;
    while(temp!=NULL)
    {
        if(temp->data == search)
        {
            *t=temp;
            *f=1;
            return;
        }
        else if(search<temp->data)
        {
            *p=temp;
            temp=temp->lc;
        }
        else
        {
            *p=temp;
            temp=temp->rc;
        }
    }
    if(temp==NULL)
        *f=0;
}
void delete(btree **r,int data)
{
    int flag;
    btree *temp,*parent;
    search(&root,data,&flag,&temp,&parent);
    if(flag==0)
    {
        printf(" %d not found\n",data);
        return;
    }
    if(temp->lc==NULL&&temp->rc==NULL)
    {
        if(temp==parent->lc)
            parent-lc==NULL;
        else
            parent->rc
