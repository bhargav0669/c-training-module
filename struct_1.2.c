//Pointers to Structure
#include<stdio.h>
struct student 
{
	
	char name[20];
	int rollno;
	
};

int main()
{
int i,n;
printf("How many student data you want to enter?:");
scanf("%d",&n);
struct student stu[n];
struct student *ptr;
ptr=stu;
// no of student

// scan data from user
printf("Enter the name and roll number of students:\n");
for(i=0;i<n;i++)
{
	scanf("%s",&ptr[i].name);
	scanf("%d",&ptr[i].rollno);
ptr++;	
}

ptr=stu;
// printing data of student on screen 
printf("The entered student data is:\n");
for(i=0;i<n;i++)
{
	printf("%s\n",ptr[i].name);
	printf("%d\n",ptr[i].rollno);
ptr++;
}
return 0;
}
