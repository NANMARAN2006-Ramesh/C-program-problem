#include<stdio.h>
void intrest(int p,int r, int t){
    float total = (p*r*t)/100;
    printf("Total Intrest is %.2f",total);
}

int main(){
    int p,r,t;
    printf("Enter the values: ");
    scanf("%d%d%d",&p,&r,&t);
    intrest(p,r,t);
    return 0;
}