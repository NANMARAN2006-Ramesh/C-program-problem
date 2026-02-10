#include<stdio.h>
void GreaterLessEqual(int a,int b){
    if(a>b){
        printf("First number is larger");
    }
    else if(b>a){
        printf("%d is greater than %d",b,a);
    }
    else{
        printf("Both numbers are equal");
    }
}

int main(){
    int a,b;
    printf("Enter the values: ");
    scanf("%d%d",&a,&b);
    GreaterLesssEqual(a,b);
    return 0;
} 