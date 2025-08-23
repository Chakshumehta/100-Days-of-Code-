// Write a program to swap two numbers without using a third variable

#include <stdio.h>

int main() {
    int n1, n2;

    // Taking input for two numbers
    scanf("%d %d", &n1, &n2);

    // Swapping numbers
    // Add both numbers and store in n1
    n1 = n1 + n2;

    // Subtract n2 from n1 to get original n1 in n2
    n2 = n1 - n2;

    // Subtract new n2 from n1 to get original n2 in n1
    n1 = n1 - n2;

    // Displaying the numbers after swap
    printf("After swap: %d %d\n", n1, n2);

    return 0;
}
