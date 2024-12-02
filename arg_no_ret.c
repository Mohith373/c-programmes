// C program to use function with
// argument and no return values
#include <stdio.h>

void sum(int x, int y)
{
	printf("Sum of %d and %d is: %d", x, y, x + y);
}

// Driver code
int main()
{
	int x, y;
	printf("Enter x and y\n");

	scanf("%d %d", &x, &y);

	// function call
	sum(x, y);

	return 0;
}
