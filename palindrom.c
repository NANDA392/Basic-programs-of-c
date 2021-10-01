#include<stdio.h>
int pal(int n,int k)
{
   // int k=0;
    if(n<1)
        return k/10;
    else
    {   k+=n%10;
        k*=10;
        return  pal(n/10,k);
        
    }
}
int main()
{
    int n,k=0;
    printf("enter the number\n");
    scanf("%d",&n);
  printf("%d\n", k= pal(n,k));
   if(k==n)
       printf("%d is palindrime\n",n);
   else printf("%d is not a palindrome\n",n);
}

