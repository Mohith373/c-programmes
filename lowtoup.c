#include <stdio.h>

void convertCase(char *str) {
  int i = 0;
  while (str[i] != '\0') {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] = str[i] + 32; // Convert uppercase to lowercase
    } else if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] = str[i] - 32; // Convert lowercase to uppercase
    }
    i++;
  }
}

int main() {
  char str[100];
  printf("Enter a string: ");
  gets(str); // Note: gets() is unsafe, consider using fgets() in real applications

  convertCase(str);

  printf("Converted string: %s\n", str);

  return 0;
}