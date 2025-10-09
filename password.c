#include <stdio.h>
/*
Name: Macevady Mac Nganga
REGISTRATION NUMBER: CT100/G/26121/25
DESCRIPTION: Program that prompt's user to enter their password and prompts them over and over till they enter 
the correct password which it will display"Access granted" .
*/

int main()
{

    int password; 
    
    do // prompts the user to enter the password till  they enter the correct one
    {
        printf("Enter password");
        scanf("%d",&password);// user input
    } 
    while (password!=1234);
     printf("Access granted");// correct password
    
    

    
    return 0;
}