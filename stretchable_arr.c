#include<stdio.h>
#include<stdlib.h>
int main()
{
    int  *p,i,c,k=1;
    p=(int *)malloc(sizeof(int));
    printf("enter the element\n");
    scanf("%d",p);
    while(1)
    {
        printf("select:\n1.add elemnt\n2.disp\n3.exit\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                k++;
                printf("enter the element to add\n");
                p=(int *)realloc(p,k*sizeof(int));
                scanf("%d",&p[k-1]);
                break;
            case 2:
                for(i=0;i<k;i++)
                    printf("%d ",p[i]);
                printf("\n");
                break;
            case 3:
                exit(0);
        }
    }
}
