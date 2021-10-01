#include<stdio.h>
#include"get_array_sort.c"
//#define asize 10
//#define bsize 10
int main()
{
    int asize,bsize;
    printf("enter a size and bsize\n");
    scanf("%d %d",&asize,&bsize);
    int a[asize];
    int b[bsize];
    getarray(a,asize);
    getarray(b,bsize);
    int c[asize+bsize],i,j,k;
    printf("a = ");
    for(i=0;i<asize;i++)
        printf("%d ",a[i]);
    printf("\nb =");
    for(i=0;i<bsize;i++)
        printf("%d ",b[i]);
    for(i=0,j=0,k=0;i<(asize+bsize)&&j<asize&&k<bsize;i++)
    {
        if(a[j]>b[k])
        {
            c[i]=b[k++];
            continue;
        }
        else if(a[j]<b[k])
        {
            c[i]=a[j++];
            continue;
        }
        else
        {
            c[i]=a[j];
            j++;k++;
        }
    }
        while(k!=bsize)
        {
            c[i++]=b[k++];
        }
        while(j!=asize)
            c[i++]=a[j++];
    printf("\nsorted elements:\n");
    for(j=0;j<i;j++)
    printf("%d ",c[j]);
    printf("\n");
}

    
