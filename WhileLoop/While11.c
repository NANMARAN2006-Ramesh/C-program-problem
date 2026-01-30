#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    int count = 0;
    while(n--){
        int N;
        scanf("%d",&N);
        sum=sum+N;
        if(N>2){
            count++;
        }
    }
    printf("Total Delay: %d\n",sum);
    if(count>=1){
        printf("Delayed Days: %d",count);
    }
    else{
        printf("Delayed Days: 0");
    }
}