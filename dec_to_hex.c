#include<stdio.h>
int main()
{
    int dec,i=15,rem,quot;
    static  char hex[16];
    printf("enter the decimal number\n");
    scanf("%d",&dec);
    quot=dec;
    while(quot>0)
    {
        rem=quot%16;
        if(rem>=10)
            hex[i]=rem+55;
        else 
            hex[i]=rem+48;
        i--;
        quot=quot/16;
    }
    printf("(%d) 10 = (",dec);
    for(i=0;i<16;i++)
        printf("%c",hex[i]);
    printf(") 16 \n");
}


