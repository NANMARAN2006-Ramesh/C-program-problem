#include<stdio.h>
#include<string.h>
void WordCount(int j,char str[]){
    char *st = str;
    int space = 1;
    for(int i=0;i<j;i++){
        if(*(st+i)==' '){
            space++;
        }
    }
    printf("The word count is : %d",space);
}
int main(){
    char str[200];
    fgets(str,sizeof(str),stdin);
    int j = strlen(str)-1;
    WordCount(j,str);
}