#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
  if (num <= 1) return false;
  for (int i = 2; i <= num / 2; i++) {
    if (num % i == 0) return false;
  }
  return true;
}

// Function to display factors of a number
void displayFactors(int num) {
  printf("Factors of %d are: ", num);
  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      printf("%d ", i);
    }
  }
  printf("\n");
}

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  displayFactors(num);

  if (isPrime(num)) {
    printf("%d is a Prime number.\n", num);
  } else {
    printf("%d is not a Prime number.\n", num);
  }

  return 0;
}