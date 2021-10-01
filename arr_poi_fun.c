#include<stdio.h>
float sum(int,float);
float div(int,float);
float mult(int,float);

int main()
{
    float r;
    float (*p[3])(int,float)={sum,div,mult};
    r=(*p[0])(10,2.5);
    printf("sum=%f\n",r);
    r=(*p[1])(20,10);
    printf("div=%f\n",r);
    r=(*p[2])(30,7.5);
    printf("mult=%f\n",r);
}
float sum(int a,float b)
{
        return a+b;
}
float div(int a,float b)
{
    return a/b;
}
float mult(int a,float b)
{
    return a*b;
}

