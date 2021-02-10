// function pointer example in c 
#include<stdio.h>
void fun(int a)
{
	printf("The value of a is %d:",a);
	
}
int main()
{
	//function of pointer type
	void(*fun_ptr)(int);//defining function of pointer type
	fun_ptr=&fun; //assigning address of fun() to func pointer
	(*fun_ptr)(10); //funtion calling 
	return 0;
	
}


