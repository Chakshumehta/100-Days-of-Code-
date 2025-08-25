// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else

#include <stdio.h>

int main() {
    int num;

    // Taking input for the number
    scanf("%d", &num);

    // Checking if the number is positive, negative or zero
    if (num >= 0) {
        if (num == 0)
            printf("Zero\n");
        else
            printf("Positive\n");
    } else {
        printf("Negative\n");
    }

    return 0;
}
