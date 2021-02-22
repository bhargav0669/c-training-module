#include <stdio.h> 
#include <stdlib.h> // For exit() 
int main(int argc,char *argv[]) 
{ 
	FILE *fptr; 
	char filename[100],input[100];
    int i = 0,j,n = 0;
//	printf("Enter the filename to open \n"); 
//	scanf("%s", filename); 
    if(argc!=2) {
	  printf("Invalide numbers of arguments.");
	  exit(1);
    }
	fptr = fopen(argv[1], "r"); 
	if (fptr == NULL) { 
		printf("Cannot open file \n"); 
		exit(0); 
	} 
    while ((input[n] = fgetc(fptr)) !=EOF)
	 {
        n++;
     }
    input[n] = '\0';
    while (i < n)
    {
        if(input[i]==' ' && (input[i+1]==' ' || input[i-1]==' ')) {
            for(j=i;j<n;j++)
            input[j]=input[j+1];
            n--;
        } else {
            i++;
        }
    }
    printf("orginal content :\n");
    printf("%s\n",input);
    printf("\n");
    printf("content after logic:\n");
    for(i=0; input[i]!=EOF; i++) {
      //printf("%c", input[i]);
      if(input[i]==' ') { 
		 printf("\n");
	  }
   
    printf("%c",input[i]);
   }
    fclose(fptr); 
	return 0; 
}




