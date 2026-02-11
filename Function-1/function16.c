#include<stdio.h>
int fibonacci(int n){
    int first = 0;
    int second = 1;
    for(int i=0;i<n;i++){
        printf("%d ",first);
        int sum=first+second;
        first=second;
        second=sum;
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}