#include<stdio.h>
#include<string.h>
void Modify(char str[],int j){
    char *p = str;
    for(int i=0;i<j;i++){
        if(i%2!=0){
            *(p+i)='*';
        }
        else{
            continue;
        }
    }

    for(int i=0;i<j;i++){
        printf("%c",*(p+i));
    }
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int j = strlen(str)-1;
    Modify(str,j);
}