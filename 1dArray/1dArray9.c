#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int arr2[n];
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[n - 1];
    arr2[count++] = max;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
            arr2[count++] = max;
        }
    }
    for (int i = count - 1; i >= 0; i--)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}