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
 * @brief functions declaration
 * the functions to be called in stats.c are declared here
 *
 * @author Yogendra Kokamkar
 * @date 7th May 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Print data array statistics.
 *
 * A function that prints the statistics of an array including minimum, maximum, 
 * mean, and median.
 *
 * @param median 	Median value
 * @param mean 	 	Mean value	
 * @param maximum 	Maximum value	
 * @param minimum 	Minimum value	
 *
 * @return void
 */
void print_statistics(int median, int mean, int maximum, int minimum);

/**
 * @brief Prints array to screen.
 *
 * Given an array of data and a length, prints the array to the screen.
 *
 * @param data 	Char data array
 * @param len 	Array length	
 *
 * @return void
 */
void print_array(unsigned char *data, int len);

/**
 * @brief Calculate array data median value.
 *
 * Given an array of data and a length, returns the median value.
 * Assume the array is ordered.
 *
 * @param data 	Char data array
 * @param len 	Array length	
 *
 * @return The data median value
 */
int find_median(unsigned char *data, int len);

/**
 * @brief Calculate array data mean value.
 *
 * Given an array of data and a length, returns the mean.
 * Assume the array is ordered.
 *
 * @param data 	Char data array
 * @param len 	Array length	
 *
 * @return The data mean value
 */
int find_mean(unsigned char *data, int len);

/**
 * @brief Calculate array data maximum value.
 *
 * Given an array of data and a length, returns the maximum.
 * Assume the array is ordered.
 *
 * @param data 	Char data array
 * @param len 	Array length	
 *
 * @return The data maximum value
 */
int find_maximum(unsigned char *data, int len); 

/**
 * @brief Calculate array data minimum value.
 *
 * Given an array of data and a length, returns the minimum.
 * Assume the array is ordered.
 *
 * @param data 	Char data array
 * @param len 	Array length	
 *
 * @return The data minimum value
 */
int find_minimum(unsigned char *data, int len);

/**
 * @brief Calculate array data mean value.
 *
 * Given an array of data and a length, sorts the array from 
 * largest to smallest. (The zeroth Element should be the largest 
 * value, and the last element (n-1) should be the smallest value).
 *
 * @param data 	Char data array
 * @param len 	Array length	
 *
 * @return void
 */
void sort_array(unsigned char *data, int len);

#endif /* __STATS_H__ */
