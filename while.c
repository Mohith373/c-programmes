// Print numbers from 1 to 5

#include <stdio.h>
int main() {
  int i = 1;
    
  while (i <= 5) {
    printf("%d\n", i);
    ++i;
  }

  return 0;
}
#include <stdio.h>

int main() {
    int i = 1;  
    printf("Print numbers from 1 to 10:\n");
    do {
        printf("%d ", i); 
        i++;  
    } while (i <= 10);  
    printf("\n");  
    i = 10;  
    printf("\nPrint numbers from 10 to 1:\n");
    do {
        printf("%d ", i);
        i--;  
    } while (i >= 1); 
    return 0;  
}
