#include <stdio.h>
int main() {
    int travelClass, age;
    int fare = 0;
    scanf("%d%d",&travelClass,&age);

    switch (travelClass) {
        case 1:
            fare = 300; 
            if(age<12){
                int discount = fare/2; 
                int bill = fare-discount;  
                printf("%d",bill);
            }
            if(age>=60){
                fare = 300;
                int discount = (fare/33.0)*100;
                int bill = fare-discount;
                printf("%d",bill);
            }
            break;
        case 2:
            fare = 1000; 
            printf("%d",fare);
            break;
        default:
            return 0; 
    }
    return 0;
}