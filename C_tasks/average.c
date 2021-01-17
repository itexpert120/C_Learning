#include <stdio.h>

int main() {
  double item1 = 0,
         item2 = 0,
         num1 = 0,
         num2 = 0,
         average = 0;

  printf("Weight of Item 1: ");
  scanf("%lf", &item1);

  printf("No. of Iten 1: ");
  scanf("%lf", &num1);

  printf("Weight of Item 2: ");
  scanf("%lf", &item2);

  printf("No. of Iten 2: ");
  scanf("%lf", &num2);

  average = ((item1 * num1) + (item2 * num2)) / (num1 + num2);
  printf("Average Value: %f\n", average);
  return 0;
}
