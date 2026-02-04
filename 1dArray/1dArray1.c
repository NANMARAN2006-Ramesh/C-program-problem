#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int max=0;
    int max2=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if (arr[i]<max && arr[i]>max2){
                max2=arr[i];
            
        }
    }
    printf("Second Largest: %d",max2);
    return 0;
}