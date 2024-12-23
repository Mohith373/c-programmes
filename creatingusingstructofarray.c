#include <stdio.h>

struct Student {
  char name[50];
  int rollNumber;
  int age;
};

int main() {
  struct Student students[4];
  int i;

  // Reading data for 4 students
  for (i = 0; i < 4; i++) {
    printf("Enter details for student %d:\n", i + 1);
    printf("Name: ");
    scanf("%s", students[i].name);
    printf("Roll Number: ");
    scanf("%d", &students[i].rollNumber);
    printf("Age: ");
    scanf("%d", &students[i].age);
  }

  // Displaying the data of 4 students
  printf("\nDetails of students:\n");
  for (i = 0; i < 4; i++) {
    printf("Student %d:\n", i + 1);
    printf("Name: %s\n", students[i].name);
    printf("Roll Number: %d\n", students[i].rollNumber);
    printf("Age: %d\n", students[i].age);
  }

  return 0;
}