#include <stdio.h>
#include <stdlib.h>
#include "huffman.h"

// Function to read a file and count the frequency of each character
void calculate_frequencies(const char *filename, unsigned int *frequencies) {
    // Open the file in read mode
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        exit(1); // Exit the program if the file doesn't exist
    }

    int ch;
    // Read the file character by character until End Of File (EOF)
    while ((ch = fgetc(file)) != EOF) {
        // Increment the frequency at the index corresponding to the ASCII value
        frequencies[ch]++;
    }

    // Always close the file when done
    fclose(file);
}
