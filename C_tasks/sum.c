#include <stdio.h>

int main() {
  int num1, num2;
  int sum;
  printf("Input First Integer: ");
  scanf("%d", &num1);

  printf("Input Second Integer: ");
  scanf("%d", &num2);

  sum = num1 + num2;
  printf("Sum of Integers is %d\n", sum);
  return 0;
}
