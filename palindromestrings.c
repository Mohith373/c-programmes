
#include <string.h>
#include <stdbool.h>

bool isPalindromeUsingFunctions(char str[]) {
  int l = 0;
  int h = strlen(str) - 1;

  while (h > l) {
    if (str[l++] != str[h--]) {
      return false;
    }
  }
  return true;
}

bool isPalindromeWithoutFunctions(char str[]) {
  int l = 0;
  int h = 0;

  while (str[h] != '\0') {
    h++;
  }
  h--;

  while (h > l) {
    if (str[l++] != str[h--]) {
      return false;
    }
  }
  return true;
}

int main() {
  char str[100];

  printf("Enter a string: ");
  scanf("%s", str);

  if (isPalindromeUsingFunctions(str)) {
    printf("The string is a palindrome (using string handling functions).\n");
  } else {
    printf("The string is not a palindrome (using string handling functions).\n");
  }

  if (isPalindromeWithoutFunctions(str)) {
    printf("The string is a palindrome (without using string handling functions).\n");
  } else {
    printf("The string is not a palindrome (without using string handling functions).\n");
  }

  return 0;
}