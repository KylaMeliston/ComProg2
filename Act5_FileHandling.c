/*program that apppends multiple lines in a text file*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
  FILE * fptr;
  int i,n;
  char str[100];
  char fname[20];
  char str1;
  
	 
	printf("Input the file name to be opened: ");
	scanf("%s",fname);		
    fptr = fopen(fname, "a"); 
    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    
    printf("Input the number of lines to be appended: ");
    scanf("%d", &n);
    printf("The lines are : \n");  
    for(i = 0; i < n+1;i++)
    {
    fgets(str, sizeof str, stdin);
    fputs(str, fptr);
  }
  fclose (fptr);

  return 0;
}
