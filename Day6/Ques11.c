// Write a program to input an integer and check whether it is even or odd using if–else

#include <stdio.h>

int main() {
    int num;

    // Taking input for the number
    scanf("%d", &num);

    // Checking if the number is even or odd
    if(num % 2 == 0)
        printf("%d is even\n", num);
    else
        printf("%d is odd\n", num);

    return 0;
}
