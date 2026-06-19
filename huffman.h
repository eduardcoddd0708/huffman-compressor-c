#ifndef HUFFMAN_H
#define HUFFMAN_H

// Node structure for the Huffman tree
typedef struct Node {
    char character;         // The character stored
    unsigned int frequency; // Number of occurrences in the file
    struct Node *left;      // Pointer to the left child
    struct Node *right;     // Pointer to the right child
} Node;

// Function declarations
void calculate_frequencies(const char *filename, unsigned int *frequencies);

#endif
