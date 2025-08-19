#include <stdio.h>

int main() {
    // Declare variables
    int n;          // To store the number of elements
    float big;      // To store the largest number found

    // Prompt the user for the number of elementses
    printf("Enter the number of elements you wish to find the greatest element of: ");
    scanf("%d", &n);

    // Check if the input is valid
    if (n <= 0) {
        printf("Please enter a positive number of elements.\n");
        return 1;  // Exit with error code
    }
