#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50];
    int i,n;
    scanf("%d",&n);
    scanf("%s",&s1);
    while(s1[i]!='\0')
    {
        s2[i]=s1[i];
        i++;
    }
    s2[i]='\0';
    printf("%s",s2);
    return 0;
}