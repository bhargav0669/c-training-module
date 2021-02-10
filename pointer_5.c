//pointer to pointer
#include<stdio.h>
int main()
{
	int a=10;
	int *ptr; //normal pointer
	int **pptr; //pointer to pointer
	
	ptr=&a; // store address of variable a
	pptr=&ptr; // store adress of integer pointer which store value of a
	//printing the values of varaible by different methods of pointer
	
	printf("The value of a is %d\n:",a);//printing by normal way
	
	printf("The value of a is %d\n:", *ptr);//printer with pointer
	
	printf("The value of a is %d:", **pptr);//print by pointer to pointer
	
	return 0;
	
}
