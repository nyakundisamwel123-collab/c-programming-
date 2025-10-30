//3D array program to monitor hotel occupancy 
/*
Name:SAMWEL NYAKUNDI 
Reg No:PA106/G/28824/25
Description:3D array program to monitor hotel occupancy 
*/

#include <stdio.h>

int main() {
    // Seed for random number generation
    srand(time(0));

    // Declare 3D array for hotel chain (3 branches, 5 floors, 10 rooms each)
    int chair[3][5][10];

    // Step 1: Assign random occupancy (0 or 1) to each room
    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chair[branch][floor][room] = rand() % 2; // 0 or 1
            }
        }
    }

    // Step 2: Calculate total number of occupied rooms
    int total_occupied = 0;

    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                if (chair[branch][floor][room] == 1) {
                    total_occupied++;
                }
            }
        }
    }

    // Step 3: Display the result
    printf("Total number of occupied rooms: %d\n", total_occupied);

    return 0;
    }