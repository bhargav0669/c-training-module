//Self Referential Structures
//structures pointing to the same type of structures are self-referential in nature.
struct node { 
    int data1; 
    char data2; 
    struct node* link; 
}; 
  
int main() 
{ 
    struct node ob; 
    return 0; 
} 
