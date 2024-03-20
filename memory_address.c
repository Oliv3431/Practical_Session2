#include <stdio.h>

int main() {
    int num = 10; // Assign a value to the variable num

    // Print the value of the variable and its memory address
    printf("Value of num: %d\n", num);
    printf("Memory address of num: %p\n", (void*)&num);

    return 0;
}
