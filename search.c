#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int array[MAX_SIZE] = {2, 5, 8, 10, 15, 20, 25, 30, 35, 40};
    int search_value;
    int found = 0; // Flag to indicate whether the value is found or not

    printf("Enter the value you want to search for: ");
    scanf("%d", &search_value);

    // Search through the array list
    for (int i = 0; i < MAX_SIZE; i++) {
        if (array[i] == search_value) {
            printf("Value %d found at index %d\n", search_value, i);
            found = 1;
            break; // Exit loop once the value is found
        }
    }

    if (!found) {
        printf("Value %d not found in the array\n", search_value);
    }

    return 0;
}
