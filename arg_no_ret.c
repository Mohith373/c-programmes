
#include <stdio.h>
void sum(int x, int y)
{
	printf("Sum of %d and %d is: %d", x, y, x + y);
}

int main()
{
	int x, y;
	printf("Enter x and y\n");

	scanf("%d %d", &x, &y);

	// function call
	sum(x, y);

	return 0;
}
