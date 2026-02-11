#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n%3==0 && n%7==0)
    printf("multiple of both 3 and 7");
    else
    printf("both are not multiple");
    
    return 0;
}