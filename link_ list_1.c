#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct node 
{
    //int num; 
	int rollno;
	char name[20];
	char grd;                       
    struct node *nextptr;           
}*stnode;

void createNodeList(int n); // function to create the list
void displayList();         // function to display the list

int main()
{
    int n;
		printf("\n\n Linked List : To create and display Singly Linked List :\n");
		printf("-------------------------------------------------------------\n");
		
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list : \n");
    displayList();
    return 0;
}
void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
    int rollno;
	char name[20];
	char grd;   
    stnode = (struct node *)malloc(sizeof(struct node));

    if(stnode == NULL) //check whether the fnnode is NULL and if so no memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
// reads data for the node through keyboard

        printf(" Input data for node 1 : ");
        printf("enter data of student ie. rollno, name, grade respectively:\n");
      //  scanf("%d", &num);
        scanf("%d\n",&rollno);
        scanf("%s\n",&name);
        scanf("%c",&grd);
       // stnode->num = num;      
        stnode->rollno = rollno;
		strcpy(stnode->name, name);
		stnode->grd = grd;   
        stnode->nextptr = NULL; // links the address field to NULL
        tmp = stnode;
// Creating n nodes and adding to linked list
        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                printf("enter data of student ie. rollno, name, grade respectively:\n");
                scanf("%d/n",&rollno);
		        scanf("%s\n",&name);
		        scanf("%c",&grd);
                fnNode->rollno = rollno;
                strcpy(fnNode->name,name);
                fnNode->grd = grd; 
 
               // fnNode->num = num;      // links the num field of fnNode with num
                fnNode->nextptr = NULL; // links the address field of fnNode with NULL
 
                tmp->nextptr = fnNode; // links previous node i.e. tmp to the fnNode
                tmp = tmp->nextptr; 
            }
        }
    }
}
void displayList()
{
    struct node *tmp;
    int i=0;
    if(stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        
        {   printf("the data for node %d is:\n",i+1);
			printf("%d\n",tmp->rollno);
			printf("%s\n",tmp->name);
			printf("%c\n",tmp->grd);      // prints the data of current node
            tmp = tmp->nextptr;        
			i++;             // advances the position of current node
        }
    }
} 

