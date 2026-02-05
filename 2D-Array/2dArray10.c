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
    int index;
    int mul=1;
    int product = 1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            mul = mul*arr[i][j];
        }
        if(mul>product){
            product = mul;
            index = i;
        }
    }
    printf("Highest Product index is %d",index);
}