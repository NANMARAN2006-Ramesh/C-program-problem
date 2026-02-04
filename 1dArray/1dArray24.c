#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int isUnique = 1;  
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0;  
                break;
            }
        }
        if (!isUnique) {
            break;  
        }
    }
    if (isUnique)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
