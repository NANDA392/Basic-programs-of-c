#include<stdio.h>
struct s
{
    unsigned a:4;
}s1;
int main()
{
    char c;
    s1.a=12;
    printf("choose little endian(l)\tbig endian(b)\n(l/b):");
    scanf("%c",&c);
    switch(c)
    {
        case 'l':
            printf("%d\n",s1.a);
            break;
        case 'b':
            s1.a=s1.a<<4;
            printf("a=%d\n",s1.a);
            break;
        default:
            printf("re run the prgm and enter valid option\n");
    }
}

