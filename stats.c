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
 * @brief Statistical analyses to data vector
 * Analysis of array data and finding mean median max min 
 * <Add Extended Description Here>
 *
 * @author Yogendra Kokamkar
 * @date 7th May 2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  int median, mean, maximum, minimum;
  printf("Data Array\n");
  print_array(test, SIZE);

  printf("\n Ordering array...\n");
  sort_array(test, SIZE);
  printf("Ordered Data Array\n");
  print_array(test, SIZE);

  printf("\nCalculate and show statistics...\n");
  median = find_median(test, SIZE);
  mean = find_mean(test, SIZE);
  maximum = find_maximum(test, SIZE);
  minimum = find_minimum(test, SIZE);
  print_statistics(median, mean, maximum, minimum);

}

void print_statistics(int median, int mean, int maximum, int minimum) {
	 printf("Statistics\n");
	 printf(" Median: %5d\n", median);
	 printf(" Mean: %7d\n", mean);
	 printf(" Maximum: %4d\n", maximum);
	 printf(" Minimum: %4d\n", minimum);
}

void print_array(unsigned char *data, int len) {
	printf("[ ");
	for (int i = 0; i < len; ++i)
	{
		if (i < len-1) {
			printf("%d, ", data[i]);
		} else {
			printf("%d", data[i]);
		}
	}
	printf(" ]\n");
}

int find_median(unsigned char *data, int len) {
	if (len % 2 == 0) {
		return ( data[(len/2)] + data[(len/2)+1] ) / 2;
	} else {
		return data[(len/2)+1];
	}
}

int find_mean(unsigned char *data, int len) {
	int sum = 0;
	for (int i = 0; i < len; ++i)
	{
		sum += data[i];
	}
	return sum / len;
}

int find_maximum(unsigned char *data, int len) {
	return data[0];
}

int find_minimum(unsigned char *data, int len) {
	return data[len-1];
}

void sort_array(unsigned char *data, int len) {
	int aux;
	for (int i = 0; i < len-1; i++) {
		for (int j = i+1; j < len; ++j)
		{
			if (data[i] < data[j]) {
				aux = data[i];
				data[i] = data[j];
				data[j] = aux; 
			}
		}
	}
}


