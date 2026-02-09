#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int j = strlen(str)-1;
    for (int i = 0;i<j; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; 
        }
    }

    printf("Upper to Lower case : %s\n", str);
    return 0;
}
