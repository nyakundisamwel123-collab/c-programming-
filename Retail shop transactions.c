//program to show transactions of a retail shop
/*
Name:SAMWEL NYAKUNDI 
Reg No:PA106/G/28824/25
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
FILE *file;
double amount, total = 0.0;
// Open the file for reading
file = fopen("sales.txt", "r");

// Check if the file opened successfully
if (file == NULL) {
    printf("Error opening the file. Ensure 'sales.txt' exists.\n");
    return 1;
}

// Read each transaction and add to the total
while (fscanf(file, "%lf", &amount) == 1) {
    total += amount;
}

// Display the total sales for the day
printf("Total sales for the day: %.2f\n", total);

// Close the file
fclose(file);

return 0;
}