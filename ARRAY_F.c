//  Array
//Perform the following operations on integer array of 10 elements
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdlib.h>
int main()

{   

  while(1)
  {
  
    int x,array[10],i,j,a,n,sum=0,pos;
	printf("\n Hii!! This is an array program which can perform below given operation based on user choice:");
	printf("\n----------------------------------------------------\n");
	printf("\n 1 : Sort an array in ascending order");
	printf("\n 2 : Sort an array in descending order");
	printf("\n 3 : Display sum of all odd values stored in an array.");
	printf("\n 4 : Display number of even values stored in an array");
	printf("\n 5 : Set bits of odd position elements and clear bits of even position elements\n");
	printf("Enter your choice to perform the above given operation: ");
	scanf("%d",&x);
	if(x < 0 || x > 5) 
	{
	
		printf("soory! you have entered invalid choice please enter from above choice only  ");
	    exit(0);	
	}

	printf("Enter 10 elements of an array:\n");
	for(i=0;i<10;i++)
	{
	//take 10 element within array
	    scanf("%d",&array[i]); 

    }  

	 switch(x)
	 {
	 
    
        case 1: 
    
    
		for(i=0;i<10;++i)
		{
			for(j=i+1;j<10;++j)
			{
				if(array[i]>array[j])
				{
					a=array[i];
					array[i]=array[j];
					array[j]=a;
					
					
				}
			}
		}
	
	    printf("The number arranged in ascending order is as follow:\n");
	
		for(i=0;i<10;i++)
		{
			printf("%d\n",array[i]);
		}
		break; 

		case 2: 
		

		for(i=0;i<n;++i)
		{
			for(j=i+1;j<n;++j)
			{
				if(array[i]<array[j])
				{
					a=array[i];
					array[i]=array[j];
					array[j]=a;
					
					
				}
			}
		}
		
		printf("the number arranged in ascending order is as follow:\n");
		
			for(i=0;i<n;i++)
			{
				printf("%d\n",array[i]);
			}
			break;
		 case 3:
		 	

		for(i=0;i<10;i++)
		{
			if(array[i]%2==1)
			{
				sum=sum+array[i];
			}
			
		}
		
		printf("The sum of all odd elements within array is %d:",sum);
		break;
		 
		  case 4:

		for(j=0;j<=9;j++)
		{
		
		    if(array[j]%2==0)
		{
			sum=sum+1;
	    }
	    
	    }
		printf("The number of even elements within array is: %d",sum);
		break;
	
	     case 5:  
	     

		printf("enter the bit position at which we want to perform given operation:");
		scanf("%d", & pos);
		//if-else condition to weather the given number is odd or even 
		for(i=0;i<10;i++)
		{
		
		    if(array[i]%2==1)
		{  
			array[i]|= (1<<pos); // performing bitwise OR operation by setting bit at given position.
		    printf("After performing odd bit operation at given position  we get num = %d\n", (int)array[i]);
			
		}
		    else
		{
			
			array[i]&=(~(1<<pos)); // performing bitwise AND + NOT operation by cleaing bit at given position. 
			printf("After performing even bit operation at given position we get num = %d\n", (int)array[i]);
			
		}
		
		}
		
				   	
		}
	}
		
		return 0;
	
			
}
		 	
