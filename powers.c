#include <stdio.h>
int main() {
    int a,b;
    int pow=1;
    scanf("%d",&a,&b);
    for(int i=1;i<b;i++){
        pow=pow*a;
    }
     printf("%d",pow);
    return 0;
}