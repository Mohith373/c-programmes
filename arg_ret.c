// C program to use function with
// argument and with return values
#include <stdio.h>

int sum(int x, int y) { return x + y; }

// Driver code
int main()
{
	int x, y;
	printf("Enter x and y\n");
	scanf("%d %d", &x, &y);

	// function call
	printf("Sum of %d and %d is: %d", x, y, sum(x, y));

	return 0;
}

