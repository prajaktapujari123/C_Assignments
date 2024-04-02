#include <stdio.h>
#include <string.h>
int main() {
char src[] = "Hello World";
char dest[20];
strcpy(dest, src);
printf("The copied string is: %s\n", dest);
return 0;
}

