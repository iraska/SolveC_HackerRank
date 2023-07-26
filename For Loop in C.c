#include <stdio.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);

    // Loop through the interval [a, b]
    for (int i = a; i <= b; i++) {
        // Check the conditions and print the appropriate representation
        if (i >= 1 && i <= 9) {
            // If i is between 1 and 9 (inclusive), print the English representation
            switch (i) {
                case 1:
                    printf("one\n");
                    break;
                case 2:
                    printf("two\n");
                    break;
                case 3:
                    printf("three\n");
                    break;
                case 4:
                    printf("four\n");
                    break;
                case 5:
                    printf("five\n");
                    break;
                case 6:
                    printf("six\n");
                    break;
                case 7:
                    printf("seven\n");
                    break;
                case 8:
                    printf("eight\n");
                    break;
                case 9:
                    printf("nine\n");
                    break;
            }
        } else if (i % 2 == 0) {
            // If i is even, print "even"
            printf("even\n");
        } else {
            // If i is odd, print "odd"
            printf("odd\n");
        }
    }

    return 0;
}
