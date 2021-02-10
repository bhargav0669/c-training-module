// Array of pointer

#include <stdio.h> 

int main() 
{ 

	// Pointer to an array of five numbers 
	int(*a)[5]; 

	int b[5] = { 1, 2, 3, 4, 5 }; 

	int i = 0; 

	// Points to the whole array b 

	a = &b; 
    printf("The adress and value within array respectively  are:\n");
	for (i = 0; i < 5; i++) 
	{
	
	printf("" "%p,-> %d\n",*(a+i) , *(*a+i) ); 
		
    }
	return 0; 
} 
 
