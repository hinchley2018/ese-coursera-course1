#include <assert.h>
#include "../stats.h"
#include <stdio.h>

void test_edge_cases(void) {
    printf("=== Testing edge cases ===\n");
    
    /* Single element array */
    unsigned char single[] = {42};
    assert(find_minimum(single, 1) == 42);
    assert(find_maximum(single, 1) == 42);
    assert(find_mean(single, 1) == 42);
    assert(find_median(single, 1) == 42);
    printf("Single element tests passed\n");
    
    /* Two element array */
    unsigned char two[] = {10, 20};
    assert(find_minimum(two, 2) == 10);
    assert(find_maximum(two, 2) == 20);
    assert(find_mean(two, 2) == 15);
    assert(find_median(two, 2) == 15);
    printf("Two element tests passed\n\n");
}

int main(void) {
    test_edge_cases();
    printf("All tests passed!\n");
    return 0;
}
