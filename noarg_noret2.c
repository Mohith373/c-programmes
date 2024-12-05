// C program to use function with
// no argument and no return values
#include <stdio.h>

void sum()
{
	int x, y;
	printf("Enter x and y\n");
	scanf("%d %d", &x, &y);
	printf("Sum of %d and %d is: %d", x, y, x + y);
}

// Driver code
void main()
{
	// function call
	sum();
}
