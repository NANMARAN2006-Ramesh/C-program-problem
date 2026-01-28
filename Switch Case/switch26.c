#include<stdio.h>
int main(){
    int type,days;
    scanf("%d%d",&type,&days);
    switch (type)
    {
        case 1: 
            if(days<=5){
                int total = days*50;
                printf("Fine %d",total);
            }  
            else if(days>5 && days<=10){
                int total = days*100;
                printf("Fine %d",total);
            }
            else{
                int total = days*200;
                printf("Fine %d",total);
            }
            break;
    }
    return 0;
}
