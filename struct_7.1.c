//structure varaible without typedef keyword
#include<stdio.h>
struct student
{
	int rollno;
	char *name;
};
int main()
{
//creating a variable of structure
struct student s1,*ptr;
ptr=&s1;
ptr->name="bhargav";
s1.rollno =24;
printf("The name of student is %s",ptr->name);
printf("\nsThe roll number of student is %d",s1.rollno);

return 0;

}
