// STRINGS  MODULE
#include<stdio.h>
#include<string.h> 
#include<stdlib.h>
#include<conio.h>
#define size 100
#define str_size 100 //Declare the maximum size of the string
#define chr_no 255 //Maximum number of characters to be allowed beacuse 255 is max ascii character

int main()
{
	int x;
	char str[100]; /* Declares a string of size 100 */
    int l,i=0;
    int alp, digit, splch;
    alp = digit = splch = 0;
    char a[size];
	char b[size];	   
	int ch_fre[chr_no];
    int  max;
    int ascii;

    printf("\n Hii!! This is a string program which can perform below given operation based on user choice:");
	printf("\n----------------------------------------------------\n");
	printf("\n 1 : Print individual characters of string in reverse order. ");
	printf("\n 2 : Count the total number of words in a string. ");
	printf("\n 3 : Count total number of alphabets, digits and special characters in a string.");
	printf("\n 4 : Copy one string to another string");
	printf("\n 5 : Find maximum occurring character in a string.\n");
	printf("Enter your choice to perform the above given operation: ");
	scanf("%d",&x);
	
	switch(x)
	{     //Print individual characters of string in reverse order
		 case 1:
	       printf("Input the string : \n");
	       scanf("%s",str);//take string from user
		   l=strlen(str); // calculate length of input string
		   printf("The characters of the string in reverse are : \n");
	       for(i=l;i>=0;i--)
	        {
	          printf("%c ", str[i]);
	        }
	    	printf("\n");
	    	 break;
	    	 
	    case 2:
	    	//count total number of word in a string
	printf("Enter string :");
	scanf("%s", str);
	 int i=0;
	while(str[i]!='\0')
	{
		i++;
		
	}
	
    printf("The number of word inside string are: %d",i);
      break;
       
        case 3:
        	//Count total number of alphabets, digits and special characters in a string.
    
	
	   printf("\n\nCount total number of alphabets, digits and special characters :\n");
       printf("--------------------------------------------------------------------\n"); 	
       printf("Input the string : ");
       scanf("%s",str);//take input string from user
     // fgets(str, sizeof str, stdin); // function take input string from user 

     //Checks each character of string
     // while loop for checking end of string 
    while(str[i]!='\0')
    
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            splch++;
        }

        i++;
    }

    printf("Number of Alphabets in the string is : %d\n", alp);
    printf("Number of Digits in the string is : %d\n", digit);
    printf("Number of Special characters in the string is : %d\n\n", splch); 
    break;
    
       case 4:
       	//Copy one string to another string.
       	
	printf("enter a string:");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
		
	}
	b[i]='\0';
	
	printf("The orignal string=%s\n",a);
	printf("The copied string=%s",b);
	break;
	     
	   case 5:
	   	//Find maximum occurring character in a string.

	
       printf("\n\nFind maximum occurring character in a string :\n");
       printf("--------------------------------------------------\n"); 	
       printf("Input the string : ");
       scanf("%s",str);
       //fgets(str, sizeof str, stdin); function take input string from user 


    for(i=0; i<chr_no; i++)  //Set frequency of all characters to 0
    {
        ch_fre[i] = 0;
    }


    // Read for frequency of each characters 
    i=0;
    while(str[i] != '\0')
    {
        ascii = (int)str[i]; //Type casting of character to it's predefined Ascii
        ch_fre[ascii] += 1;

        i++;
    }

    max = 0;
    for(i=0; i<chr_no; i++)
    {
        if(i!=32)
        {
        if(ch_fre[i] > ch_fre[max])
            max = i;
        }
    }	
    printf("The Highest frequency of character '%c' appears number of times : %d \n\n", max, ch_fre[max]); 
    break;
    
     default:
     		printf("You have entered invalid input please enter number from above choice only thanks!");
    	 }
	
	
	return 0;
	
}
