#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count = 0;
    for(; n > 0 ; n = n/10){
        if(n%2==0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}