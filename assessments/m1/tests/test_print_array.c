#include <assert.h>
#include "../stats.h"
#include <stdio.h>

void test_print_array(unsigned char *test_array, unsigned int array_length, char* test_name) {
    print_array(test_array, array_length);
}

int main(void) {
    unsigned char test_array_0[] = {};
    unsigned int array_length_0 = 0;
    test_print_array(test_array_0, array_length_0, "Empty array");

    unsigned char test_array_1[] = {2};
    unsigned int array_length_1 = 1;
    test_print_array(test_array_1, array_length_1, "Single element array");
    
    unsigned char test_array_2[] = {34, 201, 190};
    unsigned int array_length_2 = 3;
    test_print_array(test_array_2, array_length_2, "Three element array");

    unsigned char test_array_3[] = {201, 201, 201};
    unsigned int array_length_3 = 3;
    test_print_array(test_array_3, array_length_3, "All same elements array");

    unsigned char test_array_4[] = {34, 201, 190, 154, 8, 194, 2, 4, 45, 88, 
                                    76, 123, 99, 56, 233, 212, 34, 57, 165, 142};
    unsigned int array_length_4 = 20;
    test_print_array(test_array_4, array_length_4, "Large array");
    printf("All tests passed!\n");
    return 0;
}
