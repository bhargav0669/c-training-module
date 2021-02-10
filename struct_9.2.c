//call by refrence
#include<stdio.h>
#include<string.h>
struct student
{
	char name[50];
	int id;	
};
typedef struct student stu;
stu *ptr;// pointer of type struct student
void fun(stu *ptr);// function declaration
int main()
{
	stu s1;
	s1.id=24;
	strcpy(s1.name,"bhargav");
	fun(&s1);// function callling
	return 0;
	
}

void fun(stu *ptr)//function defination
{
	
	printf("The name of student is : %s\n",ptr->name);
	printf("The id of student is : %d",ptr->id);
}


