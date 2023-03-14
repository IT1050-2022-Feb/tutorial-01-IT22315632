/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int num1, num2, avg;

  printf("input number1 : ");
  scanf("%d", &num1);

  printf("input number2 : ");
  scanf("%d", &num2);

  avg = (num1 + num2) / 2;

  printf("averrage mark of %d and %d is %d ", num1,num2,avg);

  return 0;
}
