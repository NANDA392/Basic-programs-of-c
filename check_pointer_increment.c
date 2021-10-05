void memcopy(void *src,void *dest,int len) // len in bytes
{
    char *src1=(char*)src;
    char *dest1=(char*)dest;
    for(int i=0;i<len;i++)
    {
        dest1[i]=src1[i];
    }

}

int main()
{
    int a[10]={1,22,3,4,5};
    int b[10]={0};

    memcopy(a,b,20);
    printf("after copying into b array : \r\n");
    for(int i=0;i<5;i++)
    {
        printf("%d,",b[i]);
    }
}
