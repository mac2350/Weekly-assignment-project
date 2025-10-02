#include <stdio.h>
/*
Name: Macevady Mac Nganga
REGISTRATION NUMBER: CT100/G/26121/25
DESCRIPTION: Program that gives options of mobile bundle and prompt's user to choose one of the options of a mobile bundle and 
displays the option they chose and if he choose outside the option it will produce an error message
*/

int main()
{
    // the choices
    int choice;
    printf("choose data bundle\n");
    printf("1. 100MB @ 50 Kes\n");
    printf("2. 500MB @ 200 Kes\n");
    printf("3. 1GB @ 350 Kes\n");
    printf("4. 2GB @ 600 Kes\n");
    // input of choice
    scanf("%d",&choice);
    // produces output depending on which option the user choose
    if(choice==1)
    {
        printf("You selected 100MB @ 50 Kes");
    }
    else if(choice==2)
    {
        printf("You selected 500MB @ 200 Kes");
    }
     else if(choice==3)
    {
        printf("You selected 1GB @ 350 Kes");
    }
    else if(choice==4)
    {
        printf("You selected 2GB @ 600 Kes");
    }
    else
    {
        printf("invalide choice");
    }

    return 0;

}