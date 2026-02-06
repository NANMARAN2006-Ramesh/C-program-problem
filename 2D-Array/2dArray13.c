#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d%d", &r, &c);
    int pal[r][c];
    int count = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &pal[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        int isPalindrome = 1; 
        for (int j = 0; j < c / 2; j++)
        {
            if (pal[i][j] != pal[i][c - 1 - j])
            {
                isPalindrome = 0;
                break;
            }
        }
        if (isPalindrome)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
