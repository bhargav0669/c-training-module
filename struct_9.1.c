#include<stdio.h>
#include<string.h>
struct student
{
	char name[50];
	int id;	
};
typedef struct student stu;
void fun(stu s1);// function declaration
int main()
{
	stu s1;
	s1.id=24;
	strcpy(s1.name,"bhargav");
	fun(s1);// function callling
	return 0;
	
}

void fun(stu s1)//function defination
{
	
	printf("The name of student is : %s\n",s1.name);
	printf("The id of student is : %d",s1.id);
}


