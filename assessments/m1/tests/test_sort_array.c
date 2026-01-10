#include <assert.h>
#include "../stats.h"
#include <stdio.h>



void test_sort_array(void) {
    printf("=== Testing sort_array ===\n");
    /* Test data */
    unsigned char test_array[] = {34, 201, 190};
    unsigned int array_length = 20;
    unsigned char sorted_expected[] = {201, 190, 34};
    unsigned char *sorted = sort_array(test_array, array_length);
    printf("Sorted array (largest to smallest):\n");
    for (unsigned int i = 0; i < array_length; i++) {
        printf("%u ", sorted[i]);
        assert(sorted[i] == sorted_expected[i]);
    }
    printf("\n");
    printf("sort_array test passed\n\n");
}

int main(void) {
    test_sort_array();
    printf("All tests passed!\n");
    return 0;
}
