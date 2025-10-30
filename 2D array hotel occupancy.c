//2D array program to monitor hotel occupancy 
/*
Name:SAMWEL NYAKUNDI
Reg No:PA106/G/28824/25
Description:2D array program to monitor hotel occupancy 
*/

#include <stdio.h>


int main() {
    // Seed for random number generation
    srand(time(0));

    // Declare 2D array for occupancy (5 floors, 10 rooms each)
    int occupancy[5][10];

    // Step 1: Simulate random occupancy data
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2; // 0 or 1
        }
    }

    // Step 2: Count occupied and vacant rooms per floor
    for (int floor = 0; floor < 5; floor++) {
        int occupied = 0, vacant = 0;

        for (int room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1) {
                occupied++;
            } else {
                vacant++;
            }
        }

        // Display the result for each floor
        printf("Floor %d: %d occupied, %d vacant\n", floor + 1, occupied, vacant);
    }

    return 0;
}