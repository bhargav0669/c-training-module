// structure aligment
// with use of pragma pack directive size os structure is 13 bytes(3 bytes get saved)(we avoid structure padding)
#include<stdio.h>
#pragma pack(1)
struct base  
{  
    int a;  
    char b;  
    double c;  
};  
int main()  
{  
  struct base var; // variable declaration of type base  
  // Displaying the size of the structure base  
  printf("The size of the var is : %d bytes", sizeof(var));  
return 0;  
}  


