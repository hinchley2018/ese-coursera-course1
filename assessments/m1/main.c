

#include <stdio.h>
#include "stats.h"
/* Size of the Data Set */
#define SIZE (40)

int main () {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Print the original array */
  printf("Original Array:\n");
  print_array(test, SIZE);
  
  /* Print statistics */
  printf("\n");
  print_statistics(test, SIZE);
  
  /* Sort the array */
  printf("\nSorted Array (largest to smallest):\n");
  unsigned char *sorted = sort_array(test, SIZE);
  print_array(sorted, SIZE);

  // Since I in the real world I'd avoid some additional operations since array would be sorted
  // sorted[0] and sorted[SIZE-1] would give min/max directly
  // but for this assignment I'll call them as-is to demonstrate functionality

  /* Individual function calls */
  printf("\nIndividual function results:\n");
  printf("Minimum: %u\n", find_minimum(test, SIZE));
  printf("Maximum: %u\n", find_maximum(test, SIZE));
  printf("Mean: %u\n", find_mean(test, SIZE));
  printf("Median: %u\n", find_median(test, SIZE));
  
  
  return 0;
}