#include <stdio.h>

int main() {
    int n, i = 0, success = 0, cancel = 0, val;
    
    if (scanf("%d", &n) != 1) return 0;

    while (i < n) {
        scanf("%d", &val);
        if (val == 1) {
            success++;
        } else {
            cancel++;
        }
        i++;
    }

    printf("Successful: %d\n", success);
    printf("Cancelled: %d\n", cancel);
    
    if (cancel > success) {
        printf("Status: Risk\n");
    } else {
        printf("Status: Safe\n");
    }

    return 0;
}
