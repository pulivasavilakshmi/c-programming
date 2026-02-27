#include <stdio.h>

int main() {
    int maxWeight, n, weight, i = 0, current = 0, people = 0, overloaded = 0;
    scanf("%d %d", &maxWeight, &n);
    while (i < n) {
        scanf("%d", &weight);
        if (!overloaded) {
            if (current + weight <= maxWeight) {
                current += weight;
                people++;
            } else {
                overloaded = 1;
            }
        }
        i++;
    }
    printf("People Entered: %d\nOverload Status: %s\n", people, overloaded ? "Yes" : "No");
    return 0;
}
