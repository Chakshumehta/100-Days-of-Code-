#include <stdio.h>

int main() {
    int num1, num2;

    // asking the user to type the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // asking the user to type the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // showing the sum of the two numbers
    printf("Sum is %d\n", num1 + num2);

    // showing the difference (first minus second)
    printf("Difference is %d\n", num1 - num2);

    // showing the product (multiplication)
    printf("Product is %d\n", num1 * num2);

    // checking if the second number is not zero before dividing
    if (num2 != 0) {
        printf("Quotient is %d\n", num1 / num2);
    } else {
        printf("Seconf number is zero, cannot divide by zero\n");
    }

    return 0;
}
