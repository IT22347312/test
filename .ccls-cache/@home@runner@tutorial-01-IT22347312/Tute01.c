/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {
  int sub1, sub2, total;
  float avg;

  printf("enter mark 1:");
  scanf("%d", &sub1);

  printf("enter mark 2:");
  scanf("%d", &sub2);

  total = sub1 + sub2;
  avg = (total / 2);
  printf("Average of the two subjects is: %.2f", avg);
  return 0;
}
