/*Program that converts a floating integer value from a specific temperature measurement into another*/

#include <stdio.h>

int main()
{
    float orgtemp, convertedTemp;
    char choice, converted;
    
    printf("c or C for Celsius\nf or F for Fahrenheit\nk or K for Kelvin\n");
    
    printf("Input orignal temperature value: ");
    scanf("\n%f", &orgtemp);
    printf("Select orignal temperature scale: ");
    scanf("\n%c", &choice);
    printf("Select converted temperature scale: ");
    scanf("\n%c", &converted);
    
    if (choice == 'f' || choice == 'F')
    {
        if (converted == 'c' || converted == 'C')
        {
            convertedTemp = (orgtemp - 32) * 5 / 9;
        }
        else if (converted == 'k' || converted == 'K')
        {
            convertedTemp = (orgtemp - 32) * 5 / 9 + 273.15;
        }
        else if (converted == 'f' || converted == 'f')
        {
            convertedTemp = orgtemp;
        }
        else
        {
            printf("%c is not a valid input!", converted);
            return -1;
        }
    }
    else if (choice == 'c' || choice == 'C')
    {
        if (converted == 'c' || converted == 'C')
        {
            convertedTemp = orgtemp;
        }
        else if (converted == 'k' || converted == 'K')
        {
            convertedTemp = orgtemp + 273.15;
        }
        else if (converted == 'f' || converted == 'f')
        {
            convertedTemp = (orgtemp * 9 / 5) + 32;
        }
        else
        {
            printf("%c is not a valid input!", converted);
            return -1;
        }
    }
    else if (choice == 'k' || choice== 'K')
    {
        if (converted == 'c' || converted == 'C')
        {
            convertedTemp = orgtemp - 273.15;
        }
        else if (converted == 'k' || converted == 'K')
        {
            convertedTemp = orgtemp;
        }
        else if (converted == 'f' || converted == 'f')
        {
            convertedTemp = (orgtemp - 273.15) * 9 / 5 + 32;
        }
        else
        {
            printf("%c is not a valid input!", converted);
            return -1;
        }
    }
    else
    {
        printf("%c is not a valid input!", converted);
        return -1;
    }
    printf("%.2f%c = %.2f%c", orgtemp, choice, convertedTemp, converted);
    return 0;
}