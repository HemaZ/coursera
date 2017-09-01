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
 * @brief header file for the implemented functions in stats.c
 * @author Ibrahim Essam
 * @date 02/09/2017
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief - Given an array of data and a length, returns the minimum
 * @param unsigned char a[] <arry of data>
 * @param <int n> <data length>
 * 
 * @return unsigned char variable with the minimum value
 */
unsigned char find_minimum(unsigned char a[],int n);

/**
 * @brief - Given an array of data and a length, returns the maximum
 * @param unsigned char a[] <arry of data>
 * @param <int n> <data length>
 * 
 * @return unsigned char variable with the maximum value
 */
unsigned char find_maximum(unsigned char a[],int n);

/**
 * @brief -  Given an array of data and a length, returns the mean
 * @param unsigned char a[] <arry of data>
 * @param <int n> <data length>
 * 
 * @return unsigned char variable with the mean value
 */
unsigned char find_mean(unsigned char a[],int n);

/**
 * @brief - Given an array of data and a length, prints the array to the screen
 * @param unsigned char a[] <arry of data>
 * @param <int n> <data length>
 * 
  */
void print_array(unsigned char a[],int n);

/**
 * @brief - Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 * @param unsigned char a[] <arry of data>
 * @param <int n> <data length>
 * 
 */
void sort_array(unsigned char a[],int n);

/**
 * @brief - Given an array of data and a length, returns the median value
 * @param unsigned char a[] <arry of data>
 * @param <int n> <data length>
 * 
 * @return unsigned char variable with the median value
 */
unsigned char find_median(unsigned char a[],int n);

/**
 * @brief - A function that prints the statistics of an array including minimum, maximum, mean, and median.
 * @param unsigned char a[] <arry of data>
 * @param <int n> <data length>
 * 
 */
void print_statistics(unsigned char a[],int n);

#endif /* __STATS_H__ */
