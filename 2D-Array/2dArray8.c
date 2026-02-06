
#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    } 
    int sum1 = 0;
    int totalsum=0;
    for(int i=0;i<r-1;i++){
        for(int j=0;j<c-1;j++){
            sum1 = sum1+arr[i][j];
        }
        if(sum1>totalsum){
            totalsum=sum1;
        }
    }
    int sum2=0;
    for(int i=0;i<r-1;i++){
        for(int j=1;j<c;j++){
            sum2=sum2+arr[i][j];
        }
        if(sum2>totalsum){
            totalsum = sum2;
        }
    }
    int sum3=0;
    for(int i=1;i<r;i++){
        for(int j=0;j<c-1;j++){
            sum3=sum3+arr[j][j];
        }
        if(sum3>totalsum){
            totalsum = sum3;
        }
    }
    int sum4=0;
    for(int i=1;i<r;i++){
        for(int j=1;j<c;j++){
            sum4=sum4+arr[i][j];
        }
        if(sum4>totalsum){
            totalsum=sum4;
        }
    }

    printf("Total sum is : %d",totalsum);
}