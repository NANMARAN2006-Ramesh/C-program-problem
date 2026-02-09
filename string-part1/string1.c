#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=0;
    int count=-1;
    while(str[len]!='\0'){
        count++;
        len++;
    }
    printf("The Character count is %d",count);
}