#include <stdio.h>
#include "huffman.h"

int main() {
    // Array to store the frequency of 256 possible ASCII characters
    // Initialize all elements to 0
    unsigned int frequencies[256] = {0}; 
    
    // For testing, create a simple text file named "test.txt" in your folder
    const char *filename = "test.txt";

    calculate_frequencies(filename, frequencies);

    // Print characters that appear at least once
    printf("Character Frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (frequencies[i] > 0) {
            // Print special characters nicely (e.g., newline)
            if (i == '\n') {
                printf("'\\n' : %u\n", frequencies[i]);
            } else {
                printf("'%c'  : %u\n", i, frequencies[i]);
            }
        }
    }

    return 0;
}
