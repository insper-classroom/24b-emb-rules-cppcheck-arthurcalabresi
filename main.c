#include <stdio.h>
#include <stdlib.h>

#define NUM_ELEMENTS 5

int multiplyNumbers(int x, int y) {
    int product = x * y;
}

int main(void) {
    int a, b; //uninitvar, legacyUninitvar
    a = 5;
    b = 5;
    int result;
    int result = multiplyNumbers(a, b);

    int arr[NUM_ELEMENTS];
    for(int i = 0; i < NUM_ELEMENTS; i++) { //arrayIndexOutOfBounds
        arr[i] = i;
    }

    return 0;
}
