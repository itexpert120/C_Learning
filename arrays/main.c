#include <stdio.h>

int main(){
    int num[4];
    num[0] = 4;
    num[1] = 3;
    num[2] = 2;
    num[3] = 1;

    printf("%d + %d = %d\n", num[1], num[0], num[1] + num[0]);

    return 0;
}
