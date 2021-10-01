#include<stdio.h>
#pragma pack(1)
union i
{
    int a;
    char b[15];
    double c;
};

main()
{
    union i u2={10,"nanda",3.4};
    union i u1;
    printf("size=%d\n",sizeof(union i));
    u1.a=20;
    printf("a=%d\n",u1.a);
    printf("enter the string\n");
    scanf("%s",u1.b);
    printf("b=%s\na=%d\n",u1.b,u1.a);
    u1.c=4.5;
    printf("c=%lf\n",u1.c);

}
        
