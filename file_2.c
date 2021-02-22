// Display numberof vowels stored in the file
#include<stdio.h>

int main()
{
	FILE *fp;
	int count=0;
	char ch;
	fp=fopen("b1.txt","r");
	if(fp==NULL) {
		printf("file does not exist");
		exit(1);// unsucessful termination	
	}
	do
	{
		if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U') {
			count++;	
		}
		ch=fgetc(fp);
		
	}while(ch!=EOF);
	
	printf("the number of vowels is :%d",count);
	fclose(fp);
	return 0;	
}
