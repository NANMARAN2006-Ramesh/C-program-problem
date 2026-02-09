#include<stdio.h>
#include<string.h>
int main(){
    //Password Strength - Uppercase Check atleast 1 
    char str[100];
    fgets(str,sizeof(str),stdin);
    int count = 0;
    int j = strlen(str)-1;
    for(int i=0;i<j;i++){
        if(str[i]>='A' && str[i]<='Z'){
            count++;
        }
    }
    if(count>=1){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}