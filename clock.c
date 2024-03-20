#include <stdio.h>
#include <time.h>
#include <unistd.h> // For sleep() function


int main() {
    clock_t start_time = clock(); // Record the start time

    while (1) {
        clock_t current_time = clock(); // Get the current time
        double elapsed_seconds = (double)(current_time - start_time) / CLOCKS_PER_SEC;

        printf("Seconds elapsed: %.2f\n", elapsed_seconds);

        // Sleep for 1 second
        sleep(1);
    }

    return 0;
}
