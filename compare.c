#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Compare the two numbers
    if (num1 > num2) {
        printf("%d is larger\n", num1);
    } else if (num2 > num1) {
        printf("%d is larger\n", num2);
    } else {
        printf("Both numbers are equal\n");
    }

    return 0;
}
