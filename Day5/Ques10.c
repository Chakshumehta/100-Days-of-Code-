// Write a program to input time in seconds and convert it to hours:minutes:seconds format

#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Taking input for total time in seconds
    scanf("%d", &totalSeconds);

    // Calculating hours, minutes and remaining seconds
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    // Displaying time
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
