// example of Parameterized Macros
#include<stdio.h>
#define min(x,y)((x)<(y)?(x):(y))
#define max()
int main()
{
	int x;
	x= min(3,9);
	printf("The minimum value is %d", x);
}
