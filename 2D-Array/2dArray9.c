#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int oddCount=0;
    int evenCount=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int index;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]%2==0){
                oddCount++;
            }
            else{
                evenCount++;
            }
            if(oddCount==evenCount){
                index=i+1;
            }
        }
    }
    printf("Odd Even Index is %d",index);
}