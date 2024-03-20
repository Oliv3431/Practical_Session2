#include <stdio.h>

// Function declaration
int sum(int a, int b);

int main() {
    int num1 = 5, num2 = 7;
    int result;

    // Call the sum function and store the result
    result = sum(num1, num2);

    // Print the result
    printf("Sum: %d\n", result);

    return 0;
}

// Function definition
int sum(int a, int b) {
    return a + b;
}
