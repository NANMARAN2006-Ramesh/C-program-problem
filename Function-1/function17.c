#include<stdio.h>
int Amstrong(int num){
    int value;
    int sum = 0;
    int temp = num;
    for(;num>0;num=num/10){
        int a = num%10;
        value = a*a*a;
        sum = sum+value;
    } 
    if(sum == temp){
        printf("Amstrong number");
    }
    else{
        printf("Not a Amstrong Number");
    }
    return 0;
}
int main(){
    int num;
    printf("Enter a numbner : ");
    scanf("%d",&num);
    Amstrong(num);
    return 0;
}