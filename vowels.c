#include <stdio.h>
#include<string.h>
void main() {
    char str[30];
    int vow=0,cons=0,i=0;
    printf("Enter a string:");
    gets(str);
    while(str[i]!='\n')
{
 if(str[i] =='a'||str[i] =='A'||str[i] =='e'||str[i] =='E'||str[i] == 'i'||str[i] =='I'||str[i] =='o'||str[i] =='O'||str[i] =='U'||str[i] =='u')
 vow++;
 else
   cons++;
   i++;
   }
   printf("\nNumber of vowels=%d",vow);
   printf("\nNumber of consonanats=%d",cons);
 }  