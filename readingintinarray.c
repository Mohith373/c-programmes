#include <stdio.h>

int main() {
  int n;

  // Ask user for the number of elements
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int arr[n];

  // Read n integer values into the array
  printf("Enter %d integers:\n", n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // Display the integers
  printf("The integers are:\n");
  for(int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}