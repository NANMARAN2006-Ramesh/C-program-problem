#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int count =0;
    int i = 0;
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    while (i < n)
    {
        if(arr[i]==0 && arr[i+1]==0){
            count++;
        }
        i++;
    }
    printf("Longest Default Streak: %d",count);
    return 0;
}