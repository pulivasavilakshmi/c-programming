#include <stdio.h>
int main() {
    int A,B,C;
    printf("ENTER A number:");
    scanf("%d",&A);

    printf("ENTER ANOTHER number:");
    scanf("%d",&B);
    if(A>B)
    printf("A=%d and B=%d- therefore A is Greater than B",A,B);
    else if(A<B)
    printf("A=%d and B=%d- therefore A is Greater than B",A,B);

    
    return 0;
}