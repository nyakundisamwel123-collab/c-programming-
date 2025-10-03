//simple program to check if student is eligible for final exam 
/*
Name:SAMWEL NYAKUNDI 
Reg No:PA106/G/28824/25
Description:program to check if student is eligible for final exam 

Attendance>=75% and average marks>=40 is eligible 
Attendance below75% and average marks below40 is not eligible 
*/
#include<stdio.h>

int main(){
    int attendance;//%d
    float average_marks;//%f
    
    printf("Enter the attendance percentage\t");
    scanf("%d,&attendance");
    
    printf("Enter the average marks\t");
    scanf("%f,&average_marks");
    
    if(attendance>=75 && average_marks>=40) {
       printf("eligible");
       }
       else 
       {
        printf("Not eligible");
        }
        return 0;
        }
