#include <stdio.h>

int main() {
    int num1, num2;
    float num3, num4;

    // Read two integers from stdin
    scanf("%d %d", &num1, &num2);

    // Read two floating-point numbers from stdin
    scanf("%f %f", &num3, &num4);

    // Calculate and print the sum and difference of integers
    printf("%d %d\n", num1 + num2, num1 - num2);

    // Calculate and print the sum and difference of floating-point numbers with one decimal place
    printf("%.1f %.1f\n", num3 + num4, num3 - num4);

    return 0;
}
