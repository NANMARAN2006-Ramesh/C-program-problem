#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int d = a+b+c;
    if(d==180){
        Printf("Valid Triangle");
    }
    else{
        Printf("Not a Triangle");
    }

    return 0;
}