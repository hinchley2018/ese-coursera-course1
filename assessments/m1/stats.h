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
 * @file stats.h
 * @brief Header file for stats.c
 *
 * Defines the interface to the stats functions
 *
 * @author Jonathon Hinchley
 * @date January 10, 2026
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 *
 * @param data array of unsigned char data
 * @param length length of the data array
 *
 * @return no return value
 */
void print_statistics(unsigned char *data, unsigned int length);

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 *
 * @param data array of unsigned char data
 * @param length length of the data array
 *
 * @return no return value
 */
void print_array(unsigned char *data, unsigned int length);

/**
 * @brief Given an array of data and a length, returns the median value
 *
 *
 * @param data array of unsigned char data
 * @param length length of the data array
 *
 * @return median value of array
 */
unsigned char find_median(unsigned char *data, unsigned int length);

/**
 * @brief Given an array of data and a length, returns the mean
 *
 *
 * @param data array of unsigned char data
 * @param length length of the data array
 *
 * @return mean value of array
 */
unsigned char find_mean(unsigned char *data, unsigned int length);

/**
 * @brief Given an array of data and a length, returns the maximum
 *
 *
 * @param data array of unsigned char data
 * @param length length of the data array
 *
 * @return maximum value in the array
 */
unsigned char find_maximum(unsigned char *data, unsigned int length);

/**
 * @brief Given an array of data and a length, returns the minimum
 *
 *
 * @param data array of unsigned char data
 * @param length length of the data array
 *
 * @return minimum value in the array
 */
unsigned char find_minimum(unsigned char *data, unsigned int length);

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest. 
 * (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 *
 *
 * @param data array of unsigned char data
 * @param length length of the data array
 *
 * @return array sorted from largest to smallest
 */
unsigned char* sort_array(unsigned char *data, unsigned int length);

#endif /* __STATS_H__ */
