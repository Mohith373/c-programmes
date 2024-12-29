#include <stdio.h>

int main() {

  int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  // 0 and 1 are not prime numbers
  // change flag to 1 for non-prime number
  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {

    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  // flag is 0 for prime numbers
  if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);

  return 0;
}

#include <stdio.h>


//main Program
int main()
{
    int n = 100;
    
    printf("Factors of %d are : \n", n);
    
    // finding and printing factors b/w 1 to num
    for(int i = 1; i <= n; i++)
    {
        // if n is divisible by i, then i is a factor of n
        if(n % i == 0)
            printf("%d, ", i);
    }
}
// Time Complexity: O(N)
// Space Complexity: O(1)
