//Modify any parameter of any element from given list in linked list.
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

struct node 
{
    int num;                        //Data of the node
    struct node *nextptr;           //Address of the next node
}*stnode;


void createNodeList(int n); // function to create the list
void displayList();         // function to display the list
void update_data(int old, int new1); //function to modify the list

int main()
{
        int n;
        int old;
        int new1;
		printf("\n\n Linked List : To create and display Singly Linked List :\n");
		printf("-------------------------------------------------------------\n");
		
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list : \n");
    displayList();
    printf("Hi which element from given element in list you want to modify?-->");
    scanf("%d",&old);
    printf("Enter the new element in place of replacement:-->");
    scanf("%d", &new1);
    update_data(old,new1);
    displayList();
    
    return 0;
}
    
 

     
void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));

    if(stnode == NULL) //check whether the fnnode is NULL and if so no memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
// reads data for the node through keyboard

        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        stnode->num = num;      
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
                scanf(" %d", &num);
 
                fnNode->num = num;      // links the num field of fnNode with num
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
    if(stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->num);       // prints the data of current node
            tmp = tmp->nextptr;                     // advances the position of current node
        }
    }
} 

void update_data(int old, int new1) 

{  
	int pos = 0;
	struct node *tmp = stnode;
    struct node *current = stnode;
   if(tmp==NULL) {
      printf("Linked List not initialized");
      return;
   } 

   while(current!=NULL)
    {
      if(current->num == old) 
	  {
         current->num = new1;
    
         
        printf("\n%d found at position %d, replaced with %d\n", old, pos, new1);
        return;
         
      }
      
      current = current->nextptr;
      pos++;
   }
   
   printf("%d does not exist in the list\n", old);
}
