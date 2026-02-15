#include <stdio.h>

int main() {
    int N, reversed = 0;
    scanf("%d", &N);
    for (; N > 0; N /= 10) {
        int digit = N % 10;
        reversed = reversed * 10 + digit;
    }

    printf("%d\n", reversed);
    return 0;
}