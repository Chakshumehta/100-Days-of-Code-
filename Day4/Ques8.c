// Write a program to find and display the sum of the first n natural numbers

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Taking input for n
    scanf("%d", &n);

    // Looping to calculate the sum of first n numbers
    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    // printing the sum
    printf("Sum=%d\n", sum);

    return 0;
}
