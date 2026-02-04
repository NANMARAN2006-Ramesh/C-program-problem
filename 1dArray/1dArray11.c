#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    int leftsum = 0;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        int rightsum = total - leftsum - arr[i];
        if (leftsum == rightsum)
        {
            printf("%d", i);
            count = 0;
        }
        leftsum += arr[i];
    }
    if (count)
    {
        printf("-1");
    }
    return 0;
}