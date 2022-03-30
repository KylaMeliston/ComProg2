#include <stdio.h>
int main()
{
    
    int id;
    int pin;
    int account[3][2];

    account[0][0] = 2101101252;
    account[0][1] = 20020;
    account[1][0] = 2101101254;
    account[1][1] = 40040;
    account[2][0] = 2101101256;
    account[2][1] = 60060;

    printf("ID number:");
    scanf("%d", &id);
    printf("Enter password:");
    scanf("%d", &pin);

    if (id == account[0][0], pin ==account[0][1]){
        printf("Succesfully logged in ID#: %d",account[0][0], account[0][1]);
    }else if (id ==account [1][0], pin == account[1][1]){
        printf("Succesfully logged in ID#: %d", account[1][0], account[1][1]);
    }else if (id == account [2][0],pin == account [2][1]){
        printf("You have succesfully logged in ID#: %d", account[2][0], account[2][1]);
    }else

    printf("Invalid Account! Wrong ID/PIN");
    return 0;
}