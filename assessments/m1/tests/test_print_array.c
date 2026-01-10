#include <assert.h>
#include "../stats.h"
#include <stdio.h>

void test_print_array(void) {
    printf("=== Testing print_array ===\n");
    unsigned char print_test[] = {10, 20, 30, 40, 50};
    print_array(print_test, 5);
    printf("print_array test passed\n\n");
}

int main(void) {
    test_print_array();
    printf("All tests passed!\n");
    return 0;
}
