#include <stdio.h>
int main() {
    int s;
    scanf("%d",&s);
    if(s>=20000)
    {
     int b=s+2000;
     printf("%d",b);
    }
    else
    {
        int b=s+1000;
        printf("%d",b);
    }
    
    return 0;
}