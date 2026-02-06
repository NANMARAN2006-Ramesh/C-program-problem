#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d%d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int countPrimes = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int temp = arr[i][j];
            if (temp < 2) continue; 
            int isPrime = 1;
            for (int k = 2; k * k <= temp; k++)
            {
                if (temp % k == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime)
                countPrimes++;
        }
    }
    printf("%d\n", countPrimes);
    return 0;
}
