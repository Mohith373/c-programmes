#include <stdio.h>

int main() {
   char s[100];
   int i;

   printf("Enter a string: ");
   fgets(s, sizeof(s), stdin); // Safely get input

   for (i = 0; s[i] != '\0'; i++) {
      if (s[i] >= 'a' && s[i] <= 'z') {
         s[i] -= 32; // Convert lowercase to uppercase
      } else if (s[i] >= 'A' && s[i] <= 'Z') {
         s[i] += 32; // Convert uppercase to lowercase
      }
   }

   printf("String after case conversion: %s", s);
   return 0;
}
