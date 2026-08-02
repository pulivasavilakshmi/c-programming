#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char password[50];
    int i,uppercase=0,lowercase=0,digit=0;
    fgets(password,50,stdin);
    if(strlen(password)<8){
        printf("weak");
        return 0;
    }
    for(i=0;i<password[i]!='\0';i++){
        if(isupper(password[i]))
        uppercase=1;
        else if(islower(password[i]))
        lowercase=1;
        else if(isdigit(password[i]))
        digit=1;
    }
    if(uppercase && lowercase && digit)
    printf("Strong");
    else
    {
        printf("Not strong");
    }
    return 0;
}