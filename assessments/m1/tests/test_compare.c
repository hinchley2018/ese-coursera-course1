#include <stdio.h>
#include <assert.h>
#include "../stats.h"
void test_compare_asc(int* a , int* b, int expected){
    printf("compare_asc(%d, %d) expected %d\n", *a, *b, expected);
    int actual = compare_asc(a, b);
    assert(actual == expected);
}

void test_compare_desc(int* a , int* b, int expected){
    printf("compare_desc(%d, %d) expected %d\n", *a, *b, expected);
    int actual = compare_desc(a, b);
    assert(actual == expected);
}

int main(){
    int inputs_1[] = {4, 5};
    test_compare_asc(&inputs_1[0], &inputs_1[1], -1);
    test_compare_desc(&inputs_1[0], &inputs_1[1], 1);

    int inputs_2[] = {10, 10};
    test_compare_asc(&inputs_2[0], &inputs_2[1], 0);
    test_compare_desc(&inputs_2[0], &inputs_2[1], 0);

    int inputs_3[] = {20, 15};
    test_compare_asc(&inputs_3[0], &inputs_3[1], 5);
    test_compare_desc(&inputs_3[0], &inputs_3[1], -5);
    printf("All tests passed!\n");
    return 0;
}