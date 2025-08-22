// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;

    // Taking input for length and breadth
    scanf("%d %d", &length, &breadth);

    // Calculating area
    area = length * breadth;

    // Calculating perimeter
    perimeter = 2 * (length + breadth);

    // Displaying area and perimeter in required format
    printf("Area=%d, Perimeter=%d\n", area, perimeter);

    return 0;
}