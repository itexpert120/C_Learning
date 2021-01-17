#include <stdio.h>

int main() {
  int years, weeks, days;
  int data = 0;
  printf("Insert Number of Days: ");
  scanf("%d", &data);

  years = data / 365;
  weeks = (data % 365) / 7;
  days = data - ((years * 365) + (weeks * 7));

  printf("Years: %d\n", years);
  printf("Weeks: %d\n", weeks);
  printf("Days: %d\n", days);
  return 0;
}
