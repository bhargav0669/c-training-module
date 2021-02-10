//pointer to structure
#include<stdio.h>
struct student
{
	char name[10];
	int rollno;
		
};

int main()
{
	
	struct student a={ "bhargav",24};
	struct student *ptr;
	ptr=&a;
	
	
	printf("NAME:%s\n",ptr->name);
	printf("ROLL NO:%d\n",ptr->rollno);
	
	return 0;
}


