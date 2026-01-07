#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,key=1;
    char s1[50],s2[50];
    scanf("%s %s",&s1,&s2);
    while(s1[i]!='\0' || s2[i]!='\0')
    {
        if(s1[i]!=s2[i])
        {
            key=0;
        }
        i++;
    }
    if(key)
    printf("Equal");
    else
    printf("Not Equal");
    return 0;
}