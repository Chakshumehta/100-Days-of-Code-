// Write a program to convert temperature from Celsius to Fahrenheit

#include <stdio.h>

int main() {
    float celsius;

    // Taking input for temperature in Celsius
    scanf("%f", &celsius);

    // Converting Celsius to Fahrenheit
    float fahrenheit = (celsius * 9 / 5) + 32;

    // Displaying Fahrenheit temperature
    printf("Fahrenheit=%.f\n", fahrenheit);

    return 0;
}