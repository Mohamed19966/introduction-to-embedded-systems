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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Mohamed Mostafa>
 * @date <19/11/2017>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__



/* Add Your Declarations and Function Comments here */ 
void print_array(unsigned char *data,unsigned char length); 
 
/**

 * @brief< Given an array of data and a length, prints the array to the screen> 
 
 * @param <unsigned char *data> <pointer to unsigned char array >
 * @param <unsigned char length> <Length of given array>
 * @param <Add InputName> <add description here>
 *
 * @return <Return type is void>
 */

int find_maximum(unsigned char *data,unsigned length);
/**

*  @brief<Given an array of data and a length, returns the maximum of the array>

*  @param<unsigned char *data> <pointer to array to calculate its maximum>
*  @param<unsigend length>     <length of the array>

*  @return <return type is integar>
**/
int find_minimum(unsigned char *data,unsigned length);
/**

*  @brief<Given an array of data and a length, returns the minimum of the array>

*  @param<unsigned char *data> <pointer to array to calculate its minimum>
*  @param<unsigend length>     <length of the array>

*  @return <return type is integar>
**/

void sort_array(unsigned char *data,unsigned length);

/**

*  @brief<Given an array of data and a length, sorts the array from largest to smallest>

*  @param<unsigned char *data> <pointer to array to sort it>
*  @param<unsigend length>     <length of the array>

*  @return <Return type is void>
**/

int find_mean(unsigned char *data,unsigned length);

/**

*  @brief<Given an array of data and a length, returns the mean>

*  @param<unsigned char *data> <pointer to array to calculate its mean>
*  @param<unsigend length>     <length of the array>

*  @return <Return type is int>
**/
int find_median(unsigned char *data,unsigned length);
/**

*  @brief<Given an array of data and a length, returns the mean>

*  @param<unsigned char *data> <pointer to array to calculate its median>
*  @param<unsigend length>     <length of the array>

*  @return <Return type is int>
**/


void print_statistics(unsigned char *data,unsigned length); 
/**

*  @brief<A function that prints the statistics of an array including minimum, maximum, mean, and median>

*  @param<unsigned char *data> <pointer to array to calculate its statistics>
*  @param<unsigend length>     <length of the array>

*  @return <return type is void>
**/

#endif /* __STATS_H__ */
