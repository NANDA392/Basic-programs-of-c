#include<stdio.h>
int sp;
union u
{
    int a;
}u1[5]={0,0,0,0};
int main()
{
    int i;
    char c;
    while(1)
    {
        printf("choose push(p)  pop(o) exit(e)   (p/o/e):\n");
        __fpurge(stdin);
        scanf("%c",&c);
        switch(c)
        {
            case 'p':
                if(sp>=5)
                {
                    printf("\n\nthe stack is full(stack overflow)\n");
                    break;
                }
                printf("enter the stack element\n");
                scanf("%d",&u1[sp++].a);

                break;
            case 'o':
                if(sp<=0)
                {
                    printf("\n\n\n the stack is empty\n");
                    break;
                }
                printf("\n\n the stack element:%d \n",u1[--sp].a);
                break;
            case 'e':
                exit(0);
            default:
                printf("\n\n the stack elements are\n");
                for(i=sp-1;i>=0;i--)
                    printf("%d ",u1[i].a);
                printf("\n");
        }


    }


}
