char str1[20]="nanda kumar";
int string_len(char str[20])
{
    int i=0;
    for(i=0;str[i]!='\0';i++);
    return i;
}

