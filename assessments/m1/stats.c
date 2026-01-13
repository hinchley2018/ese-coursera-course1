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
    unsigned char min = find_minimum(data, length);
    unsigned char max = find_maximum(data, length);
    unsigned char mean = find_mean(data, length);
    unsigned char median = find_median(data, length);

    printf("Statistics:\n");
    printf("Minimum: %u\n", min);
    printf("Maximum: %u\n", max);
    printf("Mean: %u\n", mean);
    printf("Median: %u\n", median);
}

void print_array(unsigned char *data, unsigned int length) {
    for (unsigned int i = 0; i < length; i++) {
        printf("%u ", data[i]);
    }
    printf("\n");
}

/*
    * Median requires sorting the array first
    * For simplicity, this function makes a copy of the array,
    * again due to embedded constraints malloc and free are avoided to avoid fragmentation.
    * but this leads to O(n) space complexity.
*/
unsigned char find_median(unsigned char *data, unsigned int length) {

    //create copy of array to sort
    unsigned char data_copy[length];
    for (unsigned int i = 0; i < length; i++) {
        data_copy[i] = data[i];
    }
    //sort the copy in ascending order using my quick sort
    qsort(data_copy, length, sizeof(unsigned char), compare_asc);
    //find median
    unsigned int median_index = length / 2;
    return data_copy[median_index];
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
    //calculate mean integer division truncates fractional part automatically
    //then cast back to unsigned char to meet assignment spec
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

    qsort(data, length, sizeof(unsigned char), compare_desc);
    return data;
}

/* 
* If a should be placed before b, compare function should
* return positive value, if it should be placed after b,
* it should return negative value. Returns 0 otherwise
*/
int compare_asc(const void* a, const void* b) {
    unsigned char int_a = *(unsigned char*)a;
    unsigned char int_b = *(unsigned char*)b;
    // ascending a > b => positive a < b => negative
    return int_a - int_b; 
}

/* 
* If a should be placed before b, compare function should
* return negative value, if it should be placed after b,
* it should return positive value. Returns 0 otherwise (same number)
*/
int compare_desc(const void* a, const void* b) {
    unsigned char int_a = *(unsigned char*)a;
    unsigned char int_b = *(unsigned char*)b;
    // descending b > a => positive b < a => negative
    return int_b - int_a; 
}
