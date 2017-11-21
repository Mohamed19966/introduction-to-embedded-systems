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
 * @author <Add FirsName LastName>
 * @date <Add date >
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
print_array(test,SIZE);
print_statistics(test,SIZE);
print_array(test,SIZE);

  /* Other Variable Declarations Go Here */

  /* Statistics and Printing Functions Go Here */
}

/* Add other Implementation File Code Here */

void print_array(unsigned char *data,unsigned char length)
{
	
	for(int i=0 ;i<length;i++)
		{
		    printf("%5d ",data[i]);
			if(i==7||i==15||i==23||i==31||i==39)
			    printf("\n");
                  
		}
 	printf("\n");
}
int find_maximum(unsigned char *data,unsigned length)
{

    int Max=0;
    for(int i=0;i<length;i++)
	{
	    if(data[i]>Max)
		Max=data[i];    
	}
	return Max;
}
int find_minimum(unsigned char *data,unsigned length)
{
   unsigned char Min=data[0];
   for(int i=1;i<length;i++)
	{
	 	if(data[i]<Min)
		    Min=data[i];
	}
	return (int)Min;
}
void sort_array(unsigned char *data,unsigned length)
{

   for(int i=0;i<length;i++)
    {
	for(int j=0;j<SIZE-i-1;j++)
	{
	   if(data[j]<data[j+1])
		{
			unsigned char temp=data[j];
			data[j]=data[j+1];
			data[j+1]=temp;			
		}
	}
    }


}
int find_mean(unsigned char *data,unsigned length)
{
	
  int sum=0;
  int average;
	for(int i=0;i<SIZE;i++)
		{
			sum+=data[i];
		}		

	average =sum/SIZE;
	return average;

}
int find_median(unsigned char *data,unsigned length)
{
	sort_array(data,length);
	int median ;
	if(!length%2==0)
		{
			median=data[(SIZE+1)/2];
		}
	else
		{
			median=data[(2*SIZE+1)/4];
		}
return median;
}
void print_statistics(unsigned char *data,unsigned length)
{
   int min  =find_minimum(data,length);
   int max  =find_maximum(data,length);
   int mean =find_mean(data,length);
   int median=find_median(data,length);
printf(" minimum is :%d\n maximum is :%d\n mean is :%d\n median is :%d\n",min,max,mean,median);

} 

