#include<stdio.h>
typedef struct emp
{
    int no;
    char name[14];
    float sal;
}EMP;
void emp_details(EMP *);
int main()
{
    EMP e;   
    printf("enter the employee no name salary\n");
    scanf("%d%s%f",&e.no,e.name,&e.sal);
    emp_details(&e);
    printf("the new  employee no name salary\n");
    printf("%d  %s  %f\n",e.no,e.name,e.sal);
}
void emp_details(EMP *e)
{
    printf("the old employee details are\n");
    printf("%d  %s  %f\n",e->no,e->name,e->sal);
    printf("enter  the new  employee no name salary\n");
    scanf("%d%s%f",&e->no,e->name,&e->sal);
}
    



