#include <assert.h>
#include "../stats.h"
#include <stdio.h>

/* Test data */
unsigned char test_array[] = {34, 201, 190, 154, 8, 194, 2, 4, 45, 88, 
                              76, 123, 99, 56, 233, 212, 34, 57, 165, 142};
unsigned int array_length = 20;

void test_find_median(void) {
    printf("=== Testing find_median ===\n");
    unsigned char median_val = find_median(test_array, array_length);
    printf("Median: %u (expected 92)\n", median_val);
    assert(median_val == 92);
    printf("find_median test passed\n\n");
}

int main(void) {
    test_find_median();
    printf("All tests passed!\n");
    return 0;
}
