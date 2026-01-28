#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    int distance;
    scanf("%d",&distance);
    switch (type)
    {
        case 1: 
            int total = distance*10;
            printf("Fare %d",total);
            break;
        case 2:
            int fare = distance*15;
            printf("Fare %d",fare);
            break;
        case 3:
            int bill = distance*20;
            printf("Fare %d",bill);
            break;
    }
    return 0;
}
