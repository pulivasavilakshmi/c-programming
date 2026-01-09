#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s[50];
    scanf("%s",s);
    for(i=0;i<s[i]!='\0';i++){
        if(s[i]>='a' && s[i]<='z')
        s[i]=s[i]-32;
    }
    printf(" %s ",s);
    return 0;
}