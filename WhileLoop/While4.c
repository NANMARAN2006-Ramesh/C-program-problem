#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count = 0;
    int arr[n];
    int i=0;
    while(i<n){
        scanf("%d",&arr[i]);
        i++;
    }
    for(int i=0;i<n;i++){
        if(arr[i]<1 && arr[i+1]<1){
            count++;
        }
    }
    printf("Longest Failure Streak : %d",count);
    return 0;
}