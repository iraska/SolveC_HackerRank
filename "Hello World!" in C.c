#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    
    // Read the input string from stdin
    scanf("%[^\n]%*c", s);

    // Print "Hello, World!" on one line
    printf("Hello, World!\n");

    // Print the input string on the next line
    printf("%s\n", s);

    return 0;
}
