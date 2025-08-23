// Write a program to swap two numbers using a third variable

#include <stdio.h>

int main() {
    int n1, n2, n3;

    // Taking input for two numbers
    scanf("%d %d", &n1, &n2);

    // Swapping numbers using a third variable
    n3 = n1;
    n1 = n2;
    n2 = n3;

    // Displaying the numbers after swap
    printf("After swap: %d %d\n", n1, n2);

    return 0;
}
