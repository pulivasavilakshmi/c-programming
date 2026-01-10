#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char s[50];
    fgets(s,50,stdin);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        count++;
    }
    printf("%d",count);
    return 0;
}