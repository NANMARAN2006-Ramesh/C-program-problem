#include <stdio.h>

int main() {
    int customerType, billAmount;
    float discount = 0, finalPay;
    if (scanf("%d %d", &customerType, &billAmount)==2) {
        
        switch (customerType) {
            case 1:
                discount = 0.05; 
                break;
            case 2:
                discount = 0.15; 
                break;
            default:
                discount = 0.00;
        }
        finalPay = billAmount - (billAmount * discount);
        printf("%d", finalPay);
    }

    return 0;
}