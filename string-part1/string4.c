#include<stdio.h>
#include<string.h>
int main(){
    //Reverse a customer feedback
    char str[100];
    fgets(str,sizeof(str),stdin);
    int j = strlen(str)-1;
    int count = 0;
    for(int i=0;i<j;i++){
        count++;
    }
    for(int j=count;j>=0;j--){
        printf("%c",str[j]);
    }
    return 0;
}