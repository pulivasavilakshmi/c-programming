#include<stdio.h>
#include<string.h>
int main()
{
    int i,target=1,len;
    char s[50];
    scanf("%s",&s[i]);
    len = strlen(s);
    for(i=0;i<len/2;i++)
    {
        if(s[i]!=s[len-i-1])
        target=0;
    }
    if(target)
    printf("Palindrome");
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}