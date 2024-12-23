#include <stdio.h>

int main() {
  int n, i, sum = 0;
  int *ptr;

  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  int arr[n];
  ptr = arr;

  printf("Enter the elements of the array:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", ptr + i);
  }

  for (i = 0; i < n; i++) {
    sum += *(ptr + i);
  }

  printf("Sum of all elements in the array: %d\n", sum);

  return 0;
}