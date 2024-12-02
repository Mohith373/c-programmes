// C program to use function with
// no argument and with return values
#include <stdio.h>

int sum()
{
	int x, y, s = 0;
	printf("Enter x and y\n");

	scanf("%d %d", &x, &y);
	s = x + y;
	return s;
}

// Driver code
int main()
{
	// function call
	printf("Sum of x and y is %d", sum());
	return 0;
}
