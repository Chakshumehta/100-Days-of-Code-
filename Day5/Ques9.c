// Write a program to calculate simple and compound interest for given principal, rate, and time

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;

    // Taking input for principal, rate, and time
    scanf("%f %f %f", &principal, &rate, &time);

    // Calculating simple interest
    float simpleInterest = (principal * rate * time) / 100;

    // Calculating compound interest
    float compoundInterest = principal * pow((1 + rate/100), time) - principal;

    // Displaying simple and compound interest
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simpleInterest, compoundInterest);

    return 0;
}
