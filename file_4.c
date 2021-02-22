#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	 FILE *fs,*ft;
	 int ch;
	 if(argc!=3) {
		  printf("Invalide numbers of arguments.");
		  exit(1);
	 }
	 fs=fopen(argv[1],"r");
	 if(fs==NULL) {
		  printf("Can't find the source file.");
		  exit(1);
	 }
	 ft=fopen(argv[2],"a");  //append conent
	 if(ft==NULL) {
		  printf("Can't open target file.");
		  fclose(fs);
	      exit(1);
	 }
	 while(1) {
	  ch=fgetc(fs);
	  if (feof(fs)) break;
	  fputc(ch,ft);
	 }
	 fclose(fs);
	 fclose(ft);
	 return 0;
}
