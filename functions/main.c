#include <stdio.h>

int AddNumber(int *nums) {
  return nums[0] + nums[1];
}

int main() {
  int nums[] = {1, 5};
  int result = AddNumber(nums);
  printf("%d + %d = %d", nums[0], nums[1], result);
  return 0;
}
