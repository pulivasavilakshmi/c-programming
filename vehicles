#include <stdio.h>

int main() {
    int n, vehicles, i = 0, conMinutes = 0, currentStreak = 0, maxStreak = 0;
    scanf("%d", &n);
    while (i < n) {
        scanf("%d", &vehicles);
        if (vehicles > 20) {
            conMinutes++;
            currentStreak++;
            if (currentStreak > maxStreak) maxStreak = currentStreak;
        } else {
            currentStreak = 0;
        }
        i++;
    }
    printf("Congestion Minutes: %d\nLongest Congestion Streak: %d\n", conMinutes, maxStreak);
    return 0;
}
