//Array
//Perform the following operations on integer array of 10 elements
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
int main()
{  
for(;;) // continue running for loop.
{
    int array[10],i,j,k,a,n,sum=0,pos;
	float x;
	char ch[50];	
	printf("\n Hii!! This is an array program which can perform below given operation based on user choice:");
	printf("\n----------------------------------------------------\n");
	printf("\n 1 : Enter 10 element of array");
	printf("\n 2 : Sort an array in ascending order");
	printf("\n 3 : Sort an array in descending order");
	printf("\n 4 : Display sum of all odd values stored in an array.");
	printf("\n 5 : Display number of even values stored in an array");
	printf("\n 6 : Set bits of odd position elements and clear bits of even position elements");
	printf("\n 7 : Exit from program\n");
	printf("Enter your choice to perform the above given operation: ");
	scanf("%f",&x);
	if(x==7) {
		printf("you are successfully exit from program");
		exit(1);
	}
	 //logic to not allow any value are negative or greater than 5 + float also!!
	if(x < 0 || x > 6 || x!=(int)x ) {  

		printf("soory! you have entered invalid choice please enter from above choice only:  ");
	    exit(0);
   }

	    
	switch((int)x) {
	 	
	 	case 1:
			printf("Enter an array of 10 elements:\n");
			for(j=0;j<10;j++) {
			    scanf("%s",ch);
				for(i=0;ch[i]!='\0';i++) {
							if((ch[i]>='a' && ch[i]<='z')  || (ch[i]>='A'  && ch[i]<='Z')) {
								printf("Error!! you have enter an alphabet");
								exit(1);
				            }
				            array[j]=atoi(ch);
			            }        
			}
			printf("Entered element in array is:\n");
			for(k=0;k<10;k++) {
				printf("%d\n",array[k]);
			}
	    break;
        case 2: 
			for(i=0;i<10;++i) {
				for(j=i+1;j<10;++j) {
					if(array[i]>array[j]) {
						a=array[i];
						array[i]=array[j];
						array[j]=a;
			    	}
				}
			}
		    printf("The number arranged in ascending order is as follow:\n");
			for(i=0;i<10;i++) {
				printf("%d\n",array[i]);
			}
		break; 
		case 3: 
		for(i=0;i<10;++i) {
			for(j=i+1;j<10;++j) {
				if(array[i]<array[j]) {
					a=array[i];
					array[i]=array[j];
					array[j]=a;
				}
			}
		}
		printf("The number arranged in ascending order is as follow:\n");
	
		for(i=0;i<10;i++) {
			printf("%d\n",array[i]);
		}
		break;
		case 4:
		for(i=0;i<10;i++) {
			if(array[i]%2==1) {
				sum=sum+array[i];
			}	
		}
		printf("The sum of all odd elements within array is :%d",sum);
		break;
		case 5:
		for(j=0;j<=9;j++) {
		    if(array[j]%2==0) {
			sum=sum+1;
	    }
	    }
		printf("The number of even elements within array is: %d",sum);
		break;
	    case 6:  
		printf("enter the bit position at which we want to perform given operation:");
		scanf("%d", & pos);
		if(pos<0){
			printf("please enter positive bit number!!!!!");
			exit(1);
		}
		//if-else condition to weather the given number is odd or even 
		for(i=0;i<10;i++) {
		    if(array[i]%2==1) {  
			array[i]|= (1<<pos); // performing bitwise OR operation by setting bit at given position.
		    printf("After performing odd bit operation at given position  we get num = %d\n", (int)array[i]);	
		} else {
			
			array[i]&=(~(1<<pos)); // performing bitwise AND + NOT operation by cleaing bit at given position. 
			printf("After performing even bit operation at given position we get num = %d\n", (int)array[i]);
		}
		}
		default:
			printf("invalid choice");	   	
	}
}
		
}

