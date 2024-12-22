#include <stdio.h>

void findLargestAndSmallest(int arr[], int n, int *largest, int *smallest) {
  *largest = arr[0];
  *smallest = arr[0];

  for (int i = 1; i < n; i++) {
    if (arr[i] > *largest) {
      *largest = arr[i];
    }
    if (arr[i] < *smallest) {
      *smallest = arr[i];
    }
  }
}

int main() {
  int n;

  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter the elements of the array:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int largest, smallest;
  findLargestAndSmallest(arr, n, &largest, &smallest);

  printf("Largest element: %d\n", largest);
  printf("Smallest element: %d\n", smallest);

  return 0;
}

#include <stdio.h>

// ...existing code...

int sumOfArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = sumOfArray(arr, n);
    printf("Sum of all elements in the array: %d\n", sum);

    return 0;
}

#include <stdio.h>

// ...existing code...

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}