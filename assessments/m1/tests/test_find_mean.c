#include <assert.h>
#include "../stats.h"
#include <stdio.h>

void test_find_mean(unsigned char *test_array, unsigned int array_length, unsigned char expected, char* test_name) {
    printf("test_find_mean %s\n", test_name);
    unsigned char mean_val = find_mean(test_array, array_length);
    printf("Mean: %u (expected %u)\n", mean_val, expected);
    assert(mean_val == expected);
}

int main(void) {
    unsigned char test_array_1[] = {2};
    unsigned int array_length_1 = 1;
    char expected_mean_1 = 2;
    test_find_mean(test_array_1, array_length_1, expected_mean_1, "{2}");

    unsigned char test_array_2[] = {34, 201, 190};
    unsigned int array_length_2 = 3;
    char expected_mean_2 = 141;
    test_find_mean(test_array_2, array_length_2, expected_mean_2, "{34,201,190}");

    unsigned char test_array_3[] = {201, 201, 201};
    unsigned int array_length_3 = 3;
    char expected_mean_3 = 201;
    test_find_mean(test_array_3, array_length_3, expected_mean_3, "{201,201,201}");

    unsigned char test_array_4[] = {34, 201, 190, 154, 8, 194, 2, 4, 45, 88, 
                                    76, 123, 99, 56, 233, 212, 34, 57, 165, 142};
    unsigned int array_length_4 = 20;
    char expected_mean_4 = 105;
    test_find_mean(test_array_4, array_length_4, expected_mean_4, "{34,201,190,154,8,194,2,4,45,88,76,123,99,56,233,212,34,57,165,142}");
    printf("All tests passed!\n");
    return 0;
}
