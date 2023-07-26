#include <stdio.h>

int main() {
    char ch;
    char str[100];
    char sentence[100];

    // Read the character from stdin
    scanf("%c", &ch);

    // Read the string from stdin
    scanf("%s", str);

    // Read the sentence from stdin
    scanf(" %[^\n]", sentence);

    // Print the character
    printf("%c\n", ch);

    // Print the string
    printf("%s\n", str);

    // Print the sentence
    printf("%s\n", sentence);

    return 0;
}
