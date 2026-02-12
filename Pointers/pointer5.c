#include<stdio.h>
void SumOfArray(int size, int arr[]){
    int *v = arr;
    int sum = 0;
    for(int i=0;i<size;i++){
        sum = sum+*(v+i);
    }
    printf("The arry sum is : %d",sum);
}

int main(){
    int size;
    printf("Enter the array size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements : \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    SumOfArray(size,arr);
}