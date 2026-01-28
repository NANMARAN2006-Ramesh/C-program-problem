#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    switch (m)
    {
        case 1:
            printf("Intrest 4%%");
            break;
        case 2:
            int y;
            scanf("%d",&y);
            if(y<=3){
                printf("Intrest 5%%");
            }
            else{
                printf("Intrest 7%%");
            }
            break;
    default:
        break;
    }
    return 0;
}