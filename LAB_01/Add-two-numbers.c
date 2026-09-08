#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
    double num1, num2, sum;

    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1) { // Validate input
        printf("Invalid input. Please enter a valid number.\n");
        exit(1);
    }

    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1) { // Validate input
        printf("Invalid input. Please enter a valid number.\n");
        exit(1);
    }

    sum = num1 + num2; // Perform addition

    printf("Sum of %.2lf and %.2lf is: %.2lf\n", num1, num2, sum);

    return 0;
}
