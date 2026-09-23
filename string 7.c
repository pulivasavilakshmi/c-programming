#include<stdio.h>
#include<ctype.h>
int main()
{
    char name[50];
    int i;
    fgets(name,50,stdin);
    name[0]=toupper(name[0]);
    for(i=0;name[i]!='\0';i++)
    name[i]=tolower(name[i]);
    printf("%s",name);
    return 0;
}
