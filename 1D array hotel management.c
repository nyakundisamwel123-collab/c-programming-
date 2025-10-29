//simple program to monitor hotel revenue and occupancy
/*
Name: SAMWEL NYAKUNDI
Reg no: PA106/G/28824/25
Description: program to monitor hotel revenue and occupancy
*/

#include <stdio.h>

int main() {
    float revenue[7];
    float total = 0.0, average;
    int i;

    //input revenue for each day
    printf("Enter the revenue for each day of the week:\n");
    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    //calculate average
    average = total / 7;

    //Display results
    printf("\nTotal weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);

    return 0;
}
//7