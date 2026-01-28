#include<stdio.h>
int main(){
    int roomType;
    scanf("%d",&roomType);
    switch (roomType)
    {
        case 1: 
            printf("Hostel Fee 80,000");
            break;
        case 2:
            printf("Hostel Fee 60,000");
            break;
        case 3:
            printf("Hostel Fee 45,000");
            break;
    }
    return 0;
}
