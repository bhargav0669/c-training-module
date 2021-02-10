//pointer with 1d  array
#include<stdio.h>
int main()
{

    int i;
	int arr[5]= {1,2,3,4,5};
	int *ptr;
	ptr=arr;
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(ptr+i));//derefrencing the pointer
		
	}
	return 0;
}
