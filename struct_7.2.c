//structure varaible  typedef keyword
#include <stdio.h>  
typedef struct student  
{  
char name[20];  
int rollno;  
}stud;  
int main()  
{  
stud s1;  
printf("Enter the details of student s1: ");  
printf("\nEnter the name of the student:");  
scanf("%s",&s1.name);  
printf("\nEnter the rollno of student:");  
scanf("%d",&s1.rollno);  
printf("\n Name of the student is : %s", s1.name);  
printf("\n Age of the student is : %d", s1.rollno);  
return 0;  
}  
