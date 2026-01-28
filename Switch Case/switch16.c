#include<stdio.h>
int main(){
    int charges;
    scanf("%d",&charges);
    int weight;
    scanf("%d",&weight);
    switch (charges)
    {
        case 1:
            if(weight>=1 && weight<=20){
                int total = weight*300;
                printf("%d",&total);
            }
            break;
        case 2:
            if(weight<=3){
                printf("free");
            }
            else if(weight>=3 && weight<=20){
                int y = weight*300;
                printf("%d",y);
            }
            break;
    
    default:
        break;
    }
    return 0;
}