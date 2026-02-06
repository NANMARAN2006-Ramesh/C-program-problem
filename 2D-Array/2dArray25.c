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
    int count = 0;
    for(int i=0;i<r;i++){
        int min = 0;
        int max = 0;
        int dif = 0;
        for(int j=0;j<c;j++){
            if(min==0 || arr[i][j]<min){
                min = arr[i][j];
            }
            if(arr[i][j]>max){
                max = arr[i][j];
            }
            dif = max-min;
        }
        if(dif<=1000){
            count++;
        }
    }
    printf("The max and min different is less than 1000 count is %d",count);
    return 0;
}