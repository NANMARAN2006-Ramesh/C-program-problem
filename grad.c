#include<stdio.h>
int main(){
    int mark;
    scanf("%d",&mark);
    if(mark>=90){
        printf("Grade A");
    }
    else if(mark>=75 && mark<90){
        printf("Grade B");
    }
    else if(mark>=35 && mark<75){
        printf("Grade C");
    }
    else{
        printf("Fail");
    }

    return 0;
}