#include<stdio.h>
#include<stdlib.h>
//#pragma pack(1)
struct student
{
  int  no;
//    char n;
   // char f;
    char name[14];
    char gen;
    // short int a;
// int  b;
    
     int c;


};
int main()
{
    int i;
   // printf("%d\n",sizeof(struct student));
    struct student *p;
    p=(struct student *)calloc(4,sizeof(struct student));
   for(i=0;i<4;i++)
    {
        printf("enter the details of %d student no: name: gen\n",i+1);
        __fpurge(stdin);
        scanf("%d%s",&(p+i)->no,&(p+i)->name);
        __fpurge(stdin);
        scanf("%c",&(p+i)->gen);
    }
    printf("entered details are:\n");
    printf("no\tname\t\tgender\n");
   for(i=0;i<4;i++)
    {
        printf("%d\t%s\t\t%c\n",p[i].no,p[i].name,p[i].gen);
    }
}
