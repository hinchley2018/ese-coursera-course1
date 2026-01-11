#include <assert.h>
#include "../stats.h"
#include <stdio.h>



void test_sort_array(unsigned char *test_array, unsigned int array_length, unsigned char *sorted_expected, char* test_name) {
    printf("Testing sort_array %s\n", test_name);
    unsigned char *sorted = sort_array(test_array, array_length);
    
    for (unsigned int i = 0; i < array_length; i++) {
        printf("sorted[%u] == sorted_expected[%u],\n", i, i);
        assert(sorted[i] == sorted_expected[i]);
    }
    printf("sort_array test passed\n\n");
}

int main(void) {
    /* Test data */
    unsigned char test_array_1[] = {2};
    unsigned int array_length_1 = 1;
    unsigned char sorted_expected_1[] = {2};
    test_sort_array(test_array_1, array_length_1, sorted_expected_1, "{2}");

    unsigned char test_array_2[] = {34, 201, 190};
    unsigned int array_length_2 = 3;
    unsigned char sorted_expected_2[] = {201, 190, 34};
    test_sort_array(test_array_2, array_length_2, sorted_expected_2, "{34,201,190}");

    unsigned char test_array_3[] = {201, 201, 201};
    unsigned int array_length_3 = 3;
    unsigned char sorted_expected_3[] = {201, 201, 201};
    test_sort_array(test_array_3, array_length_3, sorted_expected_3, "{201,201,201}");

    unsigned char test_array_4[] = {34, 201, 190, 154, 8, 194, 2, 4, 45, 88, 
                                    76, 123, 99, 56, 233, 212, 34, 57, 165, 142};
    unsigned int array_length_4 = 20;
    unsigned char sorted_expected_4[] = {233, 212, 201, 194, 190, 165, 154, 142, 
                                          123, 99, 88, 76, 57, 56, 45, 34, 34, 8, 4, 2};
    test_sort_array(test_array_4, array_length_4, sorted_expected_4, "{34,201,190,154,8,194,2,4,45,88,76,123,99,56,233,212,34,57,165,142}");
    printf("All tests passed!\n");
    return 0;
}
