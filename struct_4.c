//structure padding 
//How to avoid it?
#include <stdio.h>  
// without use of pragma pack directive the size of structure is 16 bytes (structure padding is there)
// with use of pragma pack directive size os structure is 13 bytes(3 bytes get saved)(we avoid structure padding)
//#pragma pack(1)
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





