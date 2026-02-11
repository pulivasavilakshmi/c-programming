#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')  
  printf("alphabets");
    else if(ch>='0'  &&  ch<='9')
    printf("Digit");
    else 
    printf("special characters");
    return 0;
}