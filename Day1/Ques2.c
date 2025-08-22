// Write a program to input two numbers and display sum, difference, product, and quotient

#include <stdio.h>

int main() {
    int num1, num2;

    // Taking input for two numbers
    scanf("%d %d", &num1, &num2);

    // Showing the sum
    printf("Sum=%d, ", num1 + num2);

    // Showing the difference
    printf("Diff=%d, ", num1 - num2);

    // Showing the product
    printf("Product=%d, ", num1 * num2);

    // Showing the quotient if second number is not zero
    if(num2 != 0)
        printf("Quotient=%d\n", num1 / num2);
    else
        printf("Quotient can not be calculated as second number is 0\n");

    return 0;
}
