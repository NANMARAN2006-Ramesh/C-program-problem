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
    int count =0;
    int max=0;
    int index;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            for(int k=i+1;j<c;j++){
                if(arr[i][j]>arr[i][k] || arr[i][j]<arr[i][k]){
                    count++;
                    break;
                }
            }
        }
        if(count>max){
            max=count;
            index=i;
        }
    }
    printf("Index %d",index);
}