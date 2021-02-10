//pointer to an array
#include<stdio.h>
const int SIZE = 3; 

int main() 
{ 

	// creating an array 
	int arr[] = { 1, 2, 3 }; 

	// we can make an integer pointer array to 
	// storing the address of array elements 
	int i, *ptr[SIZE]; 

	for (i = 0; i < SIZE; i++) { 

		// assigning the address of integer. 
		ptr[i] = &arr[i]; 
	} 

	// printing values using pointer 
	for (i = 0; i < SIZE; i++) { 

		printf("Value of arr[%d] = %d\n", i, *ptr[i]); 
 	} 
 	return 0;
} 


