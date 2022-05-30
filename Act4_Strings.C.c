//Program that converts vowels into uppercase letter that is encountered in a string


#include <stdio.h>
#include <string.h>

int main () 
{
  
char string[100];
char ch;
int i, vowels = 0, consonants = 0;
  
 
printf ("\nInput a sentence: ");
 gets (string);
  
printf ("\n\nThe original string: ");
 puts (string);
  
i = 0;
  
while (string[i] != '\0')
    
    {
      
if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i'
	   || string[i] == 'o' || string[i] == 'u')
	
string[i] = string[i] - 32;
      
i++;
    
}
printf ("String Converted: ");
 puts (string);
{
for (i = 0; string[i] != '\0'; i++) {
  
        ch = string[i];
  
       
        if (ch == 'a' || ch == 'e'
            || ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'A'
            || ch == 'E' || ch == 'I'
            || ch == 'O' || ch == 'U')
            vowels++;
  
     
        else if (ch == ' ')
            continue;
        else
            consonants++;
    }
  
    printf("\nString length= %zu",strlen(string));
    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    
}

 
 return 0;
}
