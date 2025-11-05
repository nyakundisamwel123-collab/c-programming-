//program to show university students examination results 
/*
Name:SAMWEL NYAKUNDI 
Reg no:PA106/G/28824/25
*/
#include <stdio.h>
// Define the structure to hold student information
typedef struct {
char name[50];
int regNumber;
int totalMarks;
} Student;
int main() {
FILE *file;
Student student;
// Open the binary file for reading
file = fopen("results.dat", "rb");
if (file == NULL) {
printf("Error opening file.\n");
return 1;
}
// Read and display each student record
printf("Student Records:\n");
printf("----------------\n");
while (fread(&student, sizeof(Student), 1, file) == 1) {
printf("Name: %s\n", student.name);
printf("Marks: %d\n", student.totalMarks);
printf("----------------\n");
}
// Close the file
fclose(file);
return 0;
}