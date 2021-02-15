// nesting in macros
#include<stdio.h> 
#define Area(x) x*x 
#define nested f(x,y,z) (z*y + Area (x)) // nesting of macros

int main() 
 {  
    int A = 8, B= 6, C = 4; 
    
    printf("The area of square= %d\n", Area(A)); 
    
    printf("nested macro output= %d\n", nested f(A,B,C));
	
	return 0; 
 }
