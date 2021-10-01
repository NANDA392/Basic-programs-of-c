void string_swap(char *p,char *q)
{
    char b;
    int i;
    for(i=0;*(p+i)!='\0'||*(q+i)!='\0';i++)
    {
        b=*(p+i);
        *(p+i)=*(q+i);
        *(q+i)=b;
    }
}
