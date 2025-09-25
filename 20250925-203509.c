/*
Name: Samwel Nyakundi
Reg No: PA106/G/25824/25
*/

#include <stdio.h>
// main function

int main() {
    // variable declaration
    float radius, height, surface_area, volume, pi;
    pi = 3.142;

    // taking input from user
    printf("Enter the radius of the cylinder (in cm): ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder (in cm): ");
    scanf("%f", &height);

    // Calculating surface area
    surface_area = (2 * (pi * radius * radius)) + (2 * pi * radius * height);
    volume = pi * radius * radius * height;

    // Printing the result
    printf("Surface area of cylinder: %.2f cm^2\n", surface_area);
    printf("Volume of cylinder: %.2f cm^3\n", volume);

    return 0;
}