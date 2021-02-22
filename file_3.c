//Display number of “the” stored in the file.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	
	FILE *fp;
	int num=0,len;
	char s1[50];
	char s2[]="the";
    int n = 0;
    int m = 0;
	fp=fopen("the.txt","r");
	if(fp==NULL) {
		printf("file not exist");
		exit(1);//abnormal termination
    }
    
   fgets(s1,80,fp);
   len= strlen(s2);      // contains the length of search string
   while(s1[n] != '\0') 
   {

      if(s1[n] == s2[m]) {     // if first character of search string matches

         // keep on searching

         while(s1[n] == s2[m]  && s1[n] !='\0') {
            n++;
            m++;
         }

         // if we sequence of characters matching with the length of searched string
         if(m == len && (s1[n] == ' ' || s1[n] == '\0')) {

            //  we find our search string.
            num++;
         }
      } else {            // if first character of search string DOES NOT match
         while(s1[n] != ' ') {        // Skip to next word
            n++;
            if(s1[n] == '\0')
            break;
         }
      }
		
      n++;
      m=0;  // reset the counter to start from first character of the search string.
   }
   printf("the number of the in the file is :%d",num);
   return 0;
}
