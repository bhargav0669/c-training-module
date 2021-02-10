//pointer within structure
#include<stdio.h>
struct student 
{
	
	char *name;  // pointer within structure
	int rollno;
	
};

int main()
{
int i,n;
printf("How many student data you want to enter?:");
scanf("%d",&n);
struct student a[n];
struct student *ptr[n];
ptr[n]=&a[n];
// no of student

// scan data from user
printf("Enter the name and roll number of students:\n");
for(i=0;i<n;i++)
{
	scanf("%s",&a[i].name);
	scanf("%d",&a[i].rollno);
	
}
// printing data of student on screen 
printf("The entered student data is:\n");
for(i=0;i<n;i++)
{
	printf("%s\n",a[i].name);
	printf("%d\n",a[i].rollno);
}
return 0;
}
