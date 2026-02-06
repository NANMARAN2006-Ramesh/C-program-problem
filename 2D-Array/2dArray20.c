#include <stdio.h>

int main() {
    int r, c;
    scanf("%d%d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int unique = arr[0][0]; 
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int count = 0;
            for (int x = 0; x < r; x++) {
                for (int y = 0; y < c; y++) {
                    if (arr[i][j] == arr[x][y]) {
                        count++;
                    }
                }
            }
            printf("Count is %d\n",count);
            int count2=0;
            if (count==1) {
                count2++;
            }
            printf("Count2 is %d\n....\n",count2);
            if(count2==1){
                unique = arr[i][j];
                break;
            }
        }
    }
    printf("Unique Number is %d", unique);
    return 0;
}