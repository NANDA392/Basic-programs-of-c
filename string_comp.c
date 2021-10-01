int string_comp(char *p,char *k)
{
    int i,j;
    for(i=0;*p!='\0';i++,p++)
    {
        if(*k==*p)
        {
            k++;
        }
        else 
            break;
    }
    if(*k=='\0'&&*p=='\0')
        return 0;
    else 
        return -1;
}

