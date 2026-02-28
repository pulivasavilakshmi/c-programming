#include <stdio.h>

int main() {
    int balance, n, price, i = 0, count = 0;
    scanf("%d %d", &balance, &n);
    while (i < n) {
        scanf("%d", &price);
        if (balance >= price) {
            balance -= price;
            count++;
        }
        i++;
    }
    printf("Successful Purchases: %d\nFinal Balance: %d\n", count, balance);
    return 0;
}
