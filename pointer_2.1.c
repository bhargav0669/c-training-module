//function returning pointer
#include<stdio.h>
//function return pointer
int* fun()
{
	//we have to declare variable as static to increase it's scope.
	static int a=10;
	return(&a);
		
}

int main()
{
	
	int* p;
	p =fun();
	//printing the address and value
	printf("The address of variable is:%p\n",p);
	printf("The value of variable is:%d\n",*p);
	
return 0;
	
}
