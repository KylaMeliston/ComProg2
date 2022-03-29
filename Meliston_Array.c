//Preprocessor directive
#include <stdio.h>


int main() {
    //Declaration of a data storage. This will store the data entered by the user.
    //Set the array size to 10 since it is the maximum that is asked.
    int NumElements[10], i, n, sum = 0;

    printf("How many elements do you want to add? ");
    scanf("%d", & n);
    /*if the user input a value less than "5" and more than "10" this will print the 1st statement. Else, if
    the user input a value within our range 5-10, it will execute the block else .*/
    if (n < 5 || n > 10) {
        printf("Array size is dapat 5-10 only bestie!");
    } 
    else {
        for (i = 0; i < n; ++i) {
            printf("Enter number %d: ", i + 1);
            scanf("%d", & NumElements[i]);
        }
        for (i = 0; i < n; ++i) {
            sum += NumElements[i];
        }
        printf("\nSum: %d", sum);
        return 0;
    }
}