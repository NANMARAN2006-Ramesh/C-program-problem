#include <stdio.h>
int main()
{
    int n;
    int capacity;
    scanf("%d",&capacity);
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    int sum2 = 0;
    int sum3 = 0;
    int count =0;
    int i = 0;
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    while (i < n)
    {
        if (arr[i] > 0)
        {
            sum += arr[i];
        }
        else
        {
            sum2 -= arr[i];
        }
        if(arr[i]>0 && arr[i+1]>0){
            count++;
        }
        i++;
    }
    sum3 =  sum - sum2;
    printf("Final Occupied Beds: %d\n",sum3);
    if(capacity>sum3){
        printf("Critical Hours: 0");
    }
    else{
        printf("Critical Hours : %d",count);
    }
    return 0;
}