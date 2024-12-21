#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Initialize two integers
    int num1 = 10, num2 = 20;

    // Print the initial values
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swap the values using the swap function
    swap(&num1, &num2);

    // Print the swapped values
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

// C Program to Swap Two Numbers without Using 
// a Temporary Variable
#include <stdio.h>

int main() {
    int a = 5, b = 10;

    // Arithmetic operations to swap values
    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d, b = %d\n", a, b);
    return 0;
}


#include <stdio.h> 
int main()
{
int var1, var2, temp; 
printf("Enter two integersn");
scanf("%d%d", &var1, &var2);
printf("Before SwappingnFirst variable = %dnSecond variable = %dn", var1, var2);
temp = var1;
var1 = var2;
var2 = temp;
printf("After SwappingnFirst variable = %dnSecond variable = %dn", var1, var2);
return 0;
}