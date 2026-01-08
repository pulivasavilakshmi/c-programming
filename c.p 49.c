#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,temp,len=0;
    char s[50];
    scanf("%s",&s);
   while(s[len]!='\0')
   len++;
    for(i=0,j=len-1;i<j;i++,j--)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    printf("%s",s);
    return 0;
}