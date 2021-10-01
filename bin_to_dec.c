#include<stdio.h>
#include<math.h>
int main()
{
  /*  int a[32]={0};
    int i=31,dec,rem,quot;
    printf("enter the decimal number\n");
    scanf("%d",&dec);
    quot=dec;
    while(quot>0)
    {
        rem=quot%2;
        a[i]=rem;
        quot/=2;
        i--;
    }
    printf("binary of %d:\n",dec);
    for(i=0;i<32;i++)
        printf("%d ",a[i]);
    printf("\n");*/
    long int bin;
    int dec=0,rem,quot,i=0;
    printf("enter the binary number\n");
    scanf("%ld",&bin);
    quot=bin;
    while(quot>0)
    {
        rem=quot%10;
        dec+=(rem*pow(2,i++));
        quot=quot/10;
    }
    printf("(%ld) to the base 2 = (%d) to the base 10\n",bin,dec);
}


