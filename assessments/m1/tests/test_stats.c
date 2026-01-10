#include <assert.h>
#include "../stats.h"
#include <stdio.h>
#include <string.h>

/* Test data */
unsigned char test_array[] = {34, 201, 190, 154, 8, 194, 2, 4, 45, 88, 
                              76, 123, 99, 56, 233, 212, 34, 57, 165, 142};
unsigned int array_length = 20;

unsigned char sorted_expected[] = {233, 212, 201, 194, 190, 165, 154, 142, 
                                    123, 99, 88, 76, 57, 56, 45, 34, 34, 8, 4, 2};

void test_find_minimum() {
    printf("=== Testing find_minimum ===\n");
    unsigned char min_val = find_minimum(test_array, array_length);
    printf("Minimum: %u (expected 2)\n", min_val);
    assert(min_val == 2);
    printf("find_minimum test passed\n\n");
}

void test_find_maximum() {
    printf("=== Testing find_maximum ===\n");
    unsigned char max_val = find_maximum(test_array, array_length);
    printf("Maximum: %u (expected 233)\n", max_val);
    assert(max_val == 233);
    printf("find_maximum test passed\n\n");
}

void test_find_mean() {
    printf("=== Testing find_mean ===\n");
    unsigned char mean_val = find_mean(test_array, array_length);
    printf("Mean: %u (expected 106)\n", mean_val);
    assert(mean_val == 106);
    printf("find_mean test passed\n\n");
}

void test_find_median() {
    printf("=== Testing find_median ===\n");
    unsigned char median_val = find_median(test_array, array_length);
    printf("Median: %u (expected 92)\n", median_val);
    assert(median_val == 92);
    printf("find_median test passed\n\n");
}

void test_sort_array() {
    printf("=== Testing sort_array ===\n");
    unsigned char sort_test[] = {34, 201, 190, 154, 8, 194, 2, 4, 45, 88, 
                                 76, 123, 99, 56, 233, 212, 34, 57, 165, 142};
    unsigned char *sorted = sort_array(sort_test, array_length);
    printf("Sorted array (largest to smallest):\n");
    for (unsigned int i = 0; i < array_length; i++) {
        printf("%u ", sorted[i]);
        assert(sorted[i] == sorted_expected[i]);
    }
    printf("\n");
    printf("sort_array test passed\n\n");
}

void test_print_array() {
    printf("=== Testing print_array ===\n");
    unsigned char print_test[] = {10, 20, 30, 40, 50};
    print_array(print_test, 5);
    printf("print_array test passed\n\n");
}

void test_print_statistics() {
    printf("=== Testing print_statistics ===\n");
    print_statistics(test_array, array_length);
    printf("print_statistics test passed\n\n");
}

void test_edge_cases() {
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

int main() {
    printf("Starting tests...\n\n");
    
    test_find_minimum();
    test_find_maximum();
    test_find_mean();
    test_find_median();
    test_sort_array();
    test_print_array();
    test_print_statistics();
    test_edge_cases();
    
    printf("All tests passed!\n");
    return 0;
}
