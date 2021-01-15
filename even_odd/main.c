#include <stdio.h>

int main() {
  int num = 0;
  printf("enter one number: ");
  scanf("%d", &num);

  if (num%2==0) {
    printf("your number %d is even", num);
    return 0;
  }

  else {
    printf("your number %d is odd", num);
    return 0;
  }
}
