#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // For fmax

#define NUM_COUNT 3  // Constant for number of inputs

// find the largest number using fmax module
float largestNum(float numbers[], int count) {
    float largest = numbers[0];
    for (int i = 1; i < count; i++) {
        largest = fmax(largest, numbers[i]);
    }
    return largest;
}


int main(){
    float numbers[NUM_COUNT];  // Array to hold input numbers

   // User input
    for (int i = 0; i < NUM_COUNT; i++) {
        printf("Type number %d: ", i + 1);
        if (scanf("%f", &numbers[i]) != 1) {
            printf("Invalid input. Please enter a valid number.\n");
            return 1;  // Exit on invalid input
        }
    }

    // Check if all numbers are equal
    if (numbers[0] == numbers[1] && numbers[1] == numbers[2]) {
        printf("All numbers are equal!\n");
    } else {
        float largest = largestNum(numbers, NUM_COUNT);
        printf("The largest number is: %.3f\n", largest);
    }

    return 0;
}
