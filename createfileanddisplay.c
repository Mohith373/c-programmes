#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *file;
  char filename[100], ch;

  // Prompt user to enter the filename
  printf("Enter the filename to open: ");
  scanf("%s", filename);

  // Open the file in read mode
  file = fopen(filename, "r");

  // Check if the file exists
  if (file == NULL) {
    printf("Could not open file %s for reading.\n", filename);
    return 1;
  }

  // Read and display the contents of the file
  while ((ch = fgetc(file)) != EOF) {
    putchar(ch);
  }

  // Close the file
  fclose(file);

  return 0;
}