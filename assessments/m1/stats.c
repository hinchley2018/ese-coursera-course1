/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief implementation file for stats.h
 *
 * Assignment 1 - Statistics and Sorting
 * See main.c for main() function
 *
 * @author Jonathon Hinchley
 * @date January 10, 2026
 *
 */



#include <stdio.h>
#include "stats.h"

void print_statistics(unsigned char *data, unsigned int length) {
}

void print_array(unsigned char *data, unsigned int length) {
    for (int i = 0; i < length; i++) {
        printf("%u ", data[i]);
    }
    printf("\n");
}


unsigned char find_median(unsigned char *data, unsigned int length) {

    return 0;
}

/*
The mathematically correct mean is fractional, 
but returning unsigned char models constrained systems where FPU may not be available and 
requires explicit handling of overflow and rounding.
 */
unsigned char find_mean(unsigned char *data, unsigned int length) {

    //sum all elements using int to avoid overflow
    unsigned int sum = 0;
    for (unsigned int i = 0; i < length; i++) {
        sum += data[i];
    }
    //calculate mean
    //integer division truncates fractional part
    //cast back to unsigned char
    unsigned char mean = (unsigned char)(sum / length); 
    return mean;
}

unsigned char find_maximum(unsigned char *data, unsigned int length) {
    //assume first element is max
    unsigned char max = data[0]; //34
    //O(n) linear search
    for (unsigned int i = 1; i < length; i++) {
        //replace max if current element is larger
        // printf("Checking data[%u] = %u against current max %u\n", i, data[i], max);
        if (data[i] > max) {//201 > 34 
            max = data[i];//201
        }
    }
    return max;
}

unsigned char find_minimum(unsigned char *data, unsigned int length) {
    //assume first element is min
    unsigned char min = data[0];
    //O(n) linear search
    for (unsigned int i = 1; i < length; i++) {
        //replace min if current element is smaller
        // printf("Checking data[%u] = %u against current min %u\n", i, data[i], min);
        if (data[i] < min) {
            min = data[i];
        }
    }

    return min;
}

/* 
 * Assignment function that hands off sorting to my recursive quick sort implementation
 * to honor the assignment requirement to implement a sorting algorithm manually.
 * But I couldn't resist doing something a bit more elegant than O(n^2) bubble sort.
 */
unsigned char* sort_array(unsigned char *data, unsigned int length) {
    //base case: arrays with 0 or 1 element are already sorted
    if (length < 2) {
        return data; 
    }
    //call quick sort, descending order
    int low = 0;
    int high = length - 1;
    unsigned char* sorted = jquick_sort(data, low, high, compare_desc);
    return sorted;
}

/* 
* If a should be placed before b, compare function should
* return positive value, if it should be placed after b,
* it should return negative value. Returns 0 otherwise
*/
int compare_asc(const void* a, const void* b) {
    int int_a = *(int*)a;
    int int_b = *(int*)b;
    // ascending a > b => positive a < b => negative
    return int_a - int_b; 
}

/* 
* If a should be placed before b, compare function should
* return negative value, if it should be placed after b,
* it should return positive value. Returns 0 otherwise (same number)
*/
int compare_desc(const void* a, const void* b) {
    int int_a = *(int*)a;
    int int_b = *(int*)b;
    // descending b > a => positive b < a => negative
    return int_b - int_a; 
}

/* Quick Sort implementation in C
 * 
 * Note: We could also use the standard library function `qsort()` 
 * from <stdlib.h> to sort this array. 
 * However, this manual implementation demonstrates understanding of
 * recursion, partitioning, and divide-and-conquer sorting. 
 * I choose array indexing to avoid pointer math
 */
unsigned char* jquick_sort(unsigned char *data, int low, int high, int (*compare)(const void*, const void*)) {
    //TODO: define partition function
    int pivot_index = 0;//placeholder
    //TODO: compare low and high 
    return data; //placeholder
}