// include standard input output header file
#include <stdio.h>

// Define Process entry point
// this is the main function
int main() {

    // assign an empty null object
    int num = 0;

    printf("Please enter a number: ");

    // get the data and give it to num
    scanf("%d", &num);

    // setup the print
    printf("The Square of %d = %d\n", num, num * num);

    // exit process
    return 0;
}
