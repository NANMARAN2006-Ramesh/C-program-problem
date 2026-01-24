#include<stdio.h>
int main(){
    char c[100];
    int b;
    scanf("%d",&b);
    fgets(c,sizof(c),stdin);
    printf("%s : %d",c,b);

    return 0;
}