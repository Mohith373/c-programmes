#include <stdio.h>

// Function prototype for swapping using pass by value
void swapByValue(int a, int b);

int main() {
    int x = 10, y = 20;

    printf("Before swapping: x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("After swapping (pass by value): x = %d, y = %d\n", x, y);

    return 0;
}

// Function definition for swapping using pass by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue function: a = %d, b = %d\n", a, b);
}

#include <stdio.h>

// Function prototype for swapping using pass by reference
void swapByReference(int *a, int *b);

int main() {
    int x = 10, y = 20;

    printf("Before swapping: x = %d, y = %d\n", x, y);
    swapByReference(&x, &y);
    printf("After swapping (pass by reference): x = %d, y = %d\n", x, y);

    return 0;
}

// Function definition for swapping using pass by reference
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByReference function: *a = %d, *b = %d\n", *a, *b);
}