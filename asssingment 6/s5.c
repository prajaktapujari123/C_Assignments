#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);
    // Convert string to uppercase
    strupr(str);
    printf("Uppercase string: %s\n", str);
    return 0;
}
 
