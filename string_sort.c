#include<stdio.h>
#include"string_swap.c"
#include"string_compare.c"
int main()
{
    char s[15][10]={"apple","car","add","string","beed","abro","aeroplane","abc","bad","break","bcas","deer","account","daa"};
    char t[10];
    int i,j,k;
    for(i=0;i<13;i++)
        for(j=i+1;j<13;j++)
        if(string_compare(s[i],s[j])>0)
                    string_swap(s[i],s[j]);
for(i=0;i<13;i++)
printf(" %s \n",s[i]);
}

                                                                                                   
