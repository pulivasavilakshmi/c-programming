#include <stdio.h>

int main() {
    int totalData, n;
    scanf("%d %d", &totalData, &n);

    int usage[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &usage[i]);
    }

    int daysUsed = 0;
    int i = 0;
    while (i < n && totalData > 0) {
        totalData -= usage[i];
        daysUsed++;
        i++;
    }
    if (totalData < 0) {
        totalData = 0;
    }

    printf("Days Used: %d\n", daysUsed);
    printf("Remaining Data: %dGB\n", totalData);

    return 0;
}
