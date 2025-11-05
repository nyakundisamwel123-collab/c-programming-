//program to monitor library book borrowing
/*
Name: SAMWEL NYAKUNDI
Reg No: PA106/G/28824/25
*/

#include <stdio.h>
#include <string.h> // ✅ Added for strcspn()

int main() {
    FILE *file;
    char bookTitle[100];

    // Open the file in append mode to preserve existing records
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Enter the title of the borrowed book: ");
    fgets(bookTitle, sizeof(bookTitle), stdin);

    // Remove the newline character added by fgets
    bookTitle[strcspn(bookTitle, "\n")] = '\0';

    // Write the book title to the file
    fprintf(file, "%s\n", bookTitle);

    // Close the file
    fclose(file);

    printf("The book title \"%s\" has been successfully stored in borrowed_books.txt\n", bookTitle);
    return 0;
}