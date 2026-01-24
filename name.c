#include<stdio.h>
int main(){ 
    //Print Your name 
    char str[100];
    fgets(str,sizeof(str),stdin);
    printf("%s",str);
    return 0;

    // Another Type
    printf("Sivan");
    printf("Ravi");
}