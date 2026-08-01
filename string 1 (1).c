#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char username[50];
    int i,len,valid=1;
    fgets(username,50,stdin);
    len=strlen(username);
    if(len<6||len>12)
    valid=0;
    if(isdigit(username[0]))
        {
            valid=0;
        }
        for(i=0;i<len;i++){
        if(!isalnum(username[i])||isupper(username[i]))
        valid=0;
        break;
    }
    if(valid)
    printf("valid");
    else{
        printf("Invalid");
    }
    return 0;
}