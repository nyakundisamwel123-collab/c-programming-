/*
Name: SAMWEL NYAKUNDI
Reg No: PA106/G/28824/25
*/

#include <stdio.h> // pre-processor directive

int main() {
    int age; // %d
    float annual_income; // %f

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income: ");
    scanf("%f", &annual_income);

    if(age >= 21 && annual_income >= 21000) {
        printf("Congratulations you qualify for a loan\n");
    }
    else {
        printf("Unfortunately we are unable to offer you a loan at this time\n");
    }

    return 0;
}