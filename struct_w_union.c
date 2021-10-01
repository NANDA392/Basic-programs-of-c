#include<stdio.h>
union u
{
    int a;
    struct s
    {
       // int a1;
        char b;
        char s[10];
    }s1;
};
int main()
{
    union u u1;
    printf("size=%d\n",sizeof(u1));
    u1.a=10;
    printf("a=%d\n",u1.a);
    scanf("%s",u1.s1.s);
//    u1.s1.a1=20;
    printf("str=%s,,,a=%d\n",u1.s1.s,u1.a);
}
