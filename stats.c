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








unsigned char find_minimum(unsigned char a[],int n){

unsigned char min=a[0];

for(int i=0;i<n;i++){
	if (a[i]<min){
		min =a[i];
	}

}

return min;
}


unsigned char find_maximum(unsigned char a[],int n){

unsigned char max=a[0];

for(int i=0;i<n;i++){
	if (a[i]>max){
		max =a[i];
	}

}

return max;
}


unsigned char find_mean(unsigned char a[],int n){
	int sum=0;
	for(int i=0; i<n;i++){
		sum+=a[i];
	}

	return (sum/n);
}


void print_array(unsigned char a[],int n){
	printf("Array Elemnts are [" );
	for(int i=0; i<n;i++){
		printf(",%d", a[i]);
	}
	printf("]\n" );
}



void sort_array(unsigned char a[],int n){
	for(int i=0; i<n;i++){
		for(int j=0; j<n;j++){
			if (a[j]>a[i])
			{
			int temp = a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}

} 



unsigned char find_median(unsigned char a[],int n){
	unsigned char median=0;
	if(n%2==0){
		median=(a[n/2]+a[(n/2)+1])/2;


	}else{
		int i=(n/2)+1;

		median=a[i];
	}


	return median;
}


void print_statistics(unsigned char a[],int n){
	printf("\nMinimum Value is %d\n",find_minimum(a,n) );
	printf("Maximum Value is %d\n",find_maximum(a,n) );
	printf("Mean Value is %d\n",find_mean(a,n) );
	printf("Median Value is %d\n",find_median(a,n) );
} 





void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  printf("Array Before Sorting\n");
  print_array(test,40);
  sort_array(test,40);
  printf("Array After Sorting\n");
  print_array(test,40);
  print_statistics(test,40);
}

/* Add other Implementation File Code Here */
