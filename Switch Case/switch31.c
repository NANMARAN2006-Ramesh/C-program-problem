#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    switch (type)
    {
        case 1: 
            printf("Membership fee 1500");
            break;
        case 2:
            printf("Membership fee 4000");
            break;
        case 3:
            printf("membership fee 7000");
            break;
    }
    return 0;
}
