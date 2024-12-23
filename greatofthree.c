#include <stdio.h>

int main() {
  int num1, num2, num3, greatest;

  // Input three numbers
  printf("Enter three numbers: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  // Find the greatest number using conditional operator
  greatest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

  // Output the greatest number
  printf("The greatest number is: %d\n", greatest);

  return 0;
}