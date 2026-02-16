#include <stdio.h>
int main() {
    int n, sum = 0;

    // Input the number N
    if (scanf("%d", &n) != 1) return 1;

    // For loop: initialize with N, continue while i > 0, 
    // divide by 10 in each step to remove the last digit
    for (int i = n; i > 0; i /= 10) {
        // Add the last digit (i % 10) to the sum
        sum += (i % 10);
    }

    printf("%d\n", sum);

    return 0;
}