// Program to calculate Actual Bill with 10% Discount if Billis more than 1000 .

#include <stdio.h>
int main() {
    float bill, discount, finalBill;
    printf("Enter total bill amount: ");
    scanf("%f", &bill);

    if (bill > 1000) {
        discount = bill * 0.10;  
        finalBill = bill - discount;
    } 
    
    else {
        finalBill = bill;
    }

    printf("Actual Bill Amount = %f", finalBill);

    return 0;
}
