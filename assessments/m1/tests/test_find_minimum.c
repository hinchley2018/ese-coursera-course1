#include <assert.h>
#include "../stats.h"
#include <stdio.h>

/* Test data */
unsigned char test_array[] = {34, 201, 190, 154, 8, 194, 2, 4, 45, 88, 
                              76, 123, 99, 56, 233, 212, 34, 57, 165, 142};
unsigned int array_length = 20;

void test_find_minimum(void) {
    printf("=== Testing find_minimum ===\n");
    unsigned char min_val = find_minimum(test_array, array_length);
    printf("Minimum: %u (expected 2)\n", min_val);
    assert(min_val == 2);
    printf("find_minimum test passed\n\n");
}

int main(void) {
    test_find_minimum();
    printf("All tests passed!\n");
    return 0;
}
