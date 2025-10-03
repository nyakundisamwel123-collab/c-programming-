//Simple program to calculate water bill
/*
Name: SAMWEL NYAKUNDI
Reg No: PA106/G/28824/25
Description: Program to calculate water bill

0_30 units  = 20 KES per unit
31_60 units = 25 KES per unit
Above 60    = 30 KES per unit
*/
#include <stdio.h>

int main() {
    int units;
    float billAmount;

    // taking unit used from user
    printf("Enter units used: ");
    scanf("%d", &units);

    // calculating bill amount
    if (units < 0) {
        printf("Units cannot be negative\n");
    }
    else if (units >= 0 && units <= 30) {
        billAmount = units * 20;
    }
    else if (units >= 31 && units <= 60) {
        billAmount = units * 25;
    }
    else {
        billAmount = units * 30;
    }

    // displaying total bill
    if (units >= 0) {
        printf("Total Bill = %.2f KES\n", billAmount);
    }

    return 0;
}
