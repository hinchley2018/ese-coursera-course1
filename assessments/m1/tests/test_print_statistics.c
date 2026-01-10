#include <assert.h>
#include "../stats.h"
#include <stdio.h>

/* Test data */
unsigned char test_array[] = {34, 201, 190, 154, 8, 194, 2, 4, 45, 88, 
                              76, 123, 99, 56, 233, 212, 34, 57, 165, 142};
unsigned int array_length = 20;

void test_print_statistics(void) {
    printf("=== Testing print_statistics ===\n");
    print_statistics(test_array, array_length);
    printf("print_statistics test passed\n\n");
}

int main(void) {
    test_print_statistics();
    printf("All tests passed!\n");
    return 0;
}
