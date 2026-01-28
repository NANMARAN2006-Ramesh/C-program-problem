#include<stdio.h>
int main(){
    int plan;
    scanf("%d",&plan);
    float data;
    scanf("%f",&data);
    switch (plan)
    {
        case 1:
            if(data<=1){
                printf("Normal Speed");
            }
            else if(data>=1){
                printf("Speed Reduced");
            }
            break;
        case 2:
            if(data<=2){
                printf("Normal Speed");
            }
            else if(data>2){
                printf("Extra Charges Applied");
            }
            break;
    
    default:
        break;
    }
    return 0;
}