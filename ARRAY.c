// 2.1 Array
//Perform the following operations on integer array of 10 elements
#include<stdio.h>
int main()

{   
    int x,array[10],i,j,a,n,sum=0;
	printf("\n Hii!! This is an array program which can perform below given operation based on user choice:");
	printf("\n----------------------------------------------------\n");
	printf("\n 1 : For accept the value from user");
	printf("\n 2 : Sort an array in ascending order");
	printf("\n 3 : Sort an array in descending order");
	printf("\n 4 : Display sum of all odd values stored in an array.");
	printf("\n 5 : Display number of even values stored in an array");
	printf("\n 6 : Set bits of odd position elements and clear bits of even position elements\n");
	printf("Enter your choice to perform the above given operation: ");
	scanf("%d",&x);
	
	switch(x)
	{
		//perform 1st operation
		case 1: 
		// program to take values from user and store them in array
	
	printf("Enter 10 elements of an array:\n");
	for(i=0;i<10;i++)
	{
	//take 10 element within array
	scanf("%d",&array[i]); 

    }  
    printf("The elemrnts of array are as follows:");
    for(i=0;i<10;i++)
    {
    //print 10 elements of array
    printf("%d\t",array[i]);
	}
	break;
    
         //perform 2nd operation
        case 2: 
    
    //program to sort array in ascending order
	//i=for outer loop.
	//j=for inner loop.
	//a=temporary variable.
	//n= no of elements on which we are perform sorting.
	//array= store element on which we perform sorting in ascending order.
	printf("enter the number of terms on which you want to perform ascending order sorting :\n");
	scanf("%d",&n);
	printf("enter the numbers: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		
	}
	//logic for sorting
	for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(array[i]>array[j])
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
	

		//perform 3rd operation
		case 3: 
		
		// program to sort array in descending order	
		//i=for outer loop.
		//j=for inner loop.
		//a=temporary variable.
		//n= no of elements on which we are perform descending order sorting
		//array=store element on which we want to perform descending sorting.
		printf("enter the value of N \n");
		scanf("%d",&n);
		printf("enter the numbers \n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&array[i]);
			
		}
		//logic for sorting
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
			
		// preform 4th operation
		 case 4:
		 	
		//The program to find sum of all odd elements in an array

	    // array=array to store entered elements.
	    //i=loop.
       	//sum= variable to store sum of odd elements within array.
		printf("enter 10 array elements:\n");
		for(i=0;i<10;i++)
		{
			scanf("%d", &array[i]);
			
		}
		//logic
		for(i=0;i<10;i++)
		{
			if(array[i]%2==1)
			{
				sum=sum+array[i];
			}
			
		}
		
		printf("The sum of all odd elements within array is %d:",sum);
		break;
		 
		  case 5:
		  	
		
		// Display number of even values stored in an array. 
		// array=array to store entered elements.
	    //i=loop.
       	//sum= variable to store number of even elements within array.

	printf("enter 10 elements within array\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&array[i]);
	}
	for(j=0;j<=9;j++)
	{
	
	if(array[j]%2==0)
	{
		sum=sum+1;
    }
    
    }
	printf("The number of even elements within array is: %d",sum);
	break;
	
	     case 6:  
	     
	     	//Set bits of odd position elements and clear bits of even position elements
	     	// array =array to store entered elements.
	        //i=loop.
          	
	printf("Enter 10 array elements:\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&array[i]);
		
	}
	for(j=0;j<=9;j++)
	{
		if(array[j]%2==1)
		{
		
			array[j]=1;
		}
		else
		{
			array[j]=0;
		}
	}
	printf("Set bit(1) for odd elements and clear bit(0) for even elements!\n");
	for(i=0;i<=9;i++)
	
	{
		printf("\n user input %d -> %d as output" ,i+1 ,array[i]);
	}
	
	break;
		    
		   default:
		   	printf("You have entered invalid input please enter number from above choice only thanks!");
		   	
}

return 0;
	
}
		 	
