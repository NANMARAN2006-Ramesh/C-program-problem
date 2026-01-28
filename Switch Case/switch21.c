#include<stdio.h>
int main(){
    int show;
    scanf("%d",&show);
    int time;
    scanf("%d",&time);
    switch (show)
    {
        case 1:
            if(time>=18){
                int a1= 150+50;
                printf("%d",a1);
            }
            else{
                printf("150");
            }
            break;
        case 2:
            if(time>=18){
                int a = 250+50;
                printf("%d",a);
            }
            else{
                printf("150");
            }
            break;
        default:
            break;
    }
    return 0;
}