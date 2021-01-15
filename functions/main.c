#include <stdio.h>

int AddNumber(int num1, int num2) {
  return num1 + num2;
}

int main() {
  int a = 5, b = 6;
  printf("%d + %d = %d", a, b, AddNumber(a, b));
  return 0;
}
