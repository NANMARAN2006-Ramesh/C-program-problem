#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int pal[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &pal[i]);
    }
    int isPalindrome = 1; 
    for (int i = 0; i < n / 2; i++) {
        if (pal[i] != pal[n - 1 - i]) {
            isPalindrome = 0; 
            break;
        }
    }
    if (isPalindrome)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
