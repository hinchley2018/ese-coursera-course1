#include <assert.h>
#include "../stats.h"
#include <stdio.h>

/* Test data */
unsigned char test_array[] = {34, 201, 190, 154, 8, 194, 2, 4, 45, 88, 
                              76, 123, 99, 56, 233, 212, 34, 57, 165, 142};
unsigned int array_length = 20;

void test_find_maximum(void) {
    printf("=== Testing find_maximum ===\n");
    unsigned char max_val = find_maximum(test_array, array_length);
    printf("Maximum: %u (expected 233)\n", max_val);
    assert(max_val == 233);
    printf("find_maximum test passed\n\n");
}

int main(void) {
    test_find_maximum();
    printf("All tests passed!\n");
    return 0;
}
