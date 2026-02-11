#include<stdio.h>
int GCD(int a, int b){
    int gc;
    for(int i=1;i<=(a<b?a:b);i++){
        if(a%i==0 && b%i==0){
            gc = i;
        }
    }
    return gc;
}
int main(){
    int a,b;
    printf("Enter a numbner : ");
    scanf("%d%d",&a,&b);
    int result = GCD(a,b);
    printf("The Greatest common divisor is : %d",result);
    return 0;
}