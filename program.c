#include <stdio.h>

int main() {
    FILE *fptr;
    
    // Open file in "w" mode to write (or "a" to append)
    fptr = fopen("file.txt", "w");
    
    if (fptr == NULL) {
        printf("File does not exist or cannot be opened.\n");
        return 1;  // Exit program if file opening fails
    }

    // Write to file
    fputs("I'm Pramod THE BEST", fptr);
    printf("File opened successfully and written.\n");

    // Close the file
    fclose(fptr);

    return 0;
}
