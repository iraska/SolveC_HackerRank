#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Complete the code to calculate the sum of the five digits of n.
    int sum = 0;
    int temp = n;

    // Extract each digit and add it to the sum
    for (int i = 0; i < 5; i++) {
        sum += temp % 10;  // Get the last digit using modulo operator
        temp /= 10;        // Remove the last digit by integer division
    }

    printf("%d", sum);

    return 0;
}
