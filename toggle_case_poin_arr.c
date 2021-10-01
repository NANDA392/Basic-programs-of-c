#include<stdio.h>
void toggle(char *p, char *q)
{
    int i;
    for(i=0;*(p+i)!='\0';i++)
    {
        if(*(p+i)>='A'&&*(p+i)<='Z')
            *(q+i)=*(p+i)+32;
        else if(*(p+i)>='a'&&*(p+i)<='z')
            *(q+i)=*(p+i)-32;
    }
    *(q+i)='\0';

}
int main()
{
    char *a[5]={"nanda","kumar","Mahesh","kRishNa","Planet"};
    char b[5][10];
    int i;
    printf("befor case toggleing\n");
    for(i=0;i<5;i++)
        printf("%s\t",a[i]);
    printf("\n");
    for(i=0;i<5;i++)
    toggle(a[i],b[i]);
    printf("after toggling\n");
    for(i=0;i<5;i++)
    printf("%s\n",b[i]);
}

