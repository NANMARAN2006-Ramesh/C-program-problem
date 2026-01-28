#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int temp = n;
    int a;
    int sum=0;
    for(;n>0;n=n/10){
        a=n%10;
        sum=sum*10+a;
    }
    if(sum==temp){
        printf("Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }
    return 0;
}