#include <stdio.h>

int main() {
    char char1, char2;
    
    // Ask the user to input two characters
    printf("\nEnter the first character: ");
    scanf("%c", &char1);
    
    printf("\nEnter the second character: ");
    scanf(" %c", &char2); // Note the space before %c to consume any newline character
    
    // Perform addition
    char result = char1 + char2;
    
    // Print the result
    printf("\nSum of '%c' and '%c' is: %d\n", char1, char2, result);
    
    return 0;
}
