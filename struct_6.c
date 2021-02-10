// array of structure
#include<stdio.h>
struct student
{
	char name[10];
	int rollno;
	
};
int main()
{
	
	int i,n;
	printf("How many student data you want to enter?\n");
	scanf("%d",&n);
	struct student stu[n];
		for(i=0;i<n;i++)
		{
		
	printf("Enter name and roll no respectively of %dst student:\n",(i+1));
	//for scanning the value of name and roll no from user

	
		scanf("%s\n",&stu[i].name);
		scanf("%d",&stu[i].rollno);
		
     	}
   
	for(i=0;i<n;i++)
	{
	
	 printf("\nThe name and rollno of %dst student respectively is:",(i+1));
	 //for printing data of student on screen
	
		printf("%s ",stu[i].name);
		printf("%d",stu[i].rollno);
		
	}
	return 0;
}

