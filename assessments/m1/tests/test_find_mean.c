#include <assert.h>
#include "../stats.h"
#include <stdio.h>

/* Test data */
unsigned char test_array[] = {34, 201, 190, 154, 8, 194, 2, 4, 45, 88, 
                              76, 123, 99, 56, 233, 212, 34, 57, 165, 142};
unsigned int array_length = 20;

void test_find_mean(void) {
    printf("=== Testing find_mean ===\n");
    unsigned char mean_val = find_mean(test_array, array_length);
    printf("Mean: %u (expected 106)\n", mean_val);
    assert(mean_val == 106);
    printf("find_mean test passed\n\n");
}

int main(void) {
    test_find_mean();
    printf("All tests passed!\n");
    return 0;
}
