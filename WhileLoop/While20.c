#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int prev, curr;
    int totalDrops = 0;
    int consecutiveDrops = 0;
    int crashDay = -1;
    scanf("%d", &prev);
    int day = 2; 
    while (day <= n) {
        scanf("%d", &curr);

        if (curr < prev) {
            totalDrops++;
            consecutiveDrops++;
            if (consecutiveDrops == 3 && crashDay == -1) {
                crashDay = day; 
            }
        } else {
            consecutiveDrops = 0; 
        }

        prev = curr;
        day++;
    }

    if (crashDay == -1)
        printf("Crash Day: Not Detected\n");
    else
        printf("Crash Day: %d\n", crashDay);

    printf("Total Drops: %d\n", totalDrops);

    return 0;
}
