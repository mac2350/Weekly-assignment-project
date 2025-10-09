#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
Name: Macevady Mac Nganga
REGISTRATION NUMBER: CT100/G/26121/25
DESCRIPTION: Program that prompt's user to enter their choice while the computer generates a random number and
            then it compare the  two choices and then determines if the user's choice is to low or huge or equal
            to that of the computer and keeps prompting the user till computer and user are equal and prints number
            of trials.
*/
int main()
{
    srand(time(NULL)); // seeds generater with current time ensuring to get a different value from the comuter
    int userchoice;
    int computerchoice; //gives range to the random number from1-20
    // repeats itself till the user enters a digit between 1 and 20
    int trials=0;
    do
    {
        computerchoice=(rand()%20)+1;
        do
        {
             printf("Enter your choice: ");
        scanf("%d",&userchoice);// input
        } while (userchoice<1||userchoice>20);
        
        
       
        if(userchoice<computerchoice)
    {
        printf("Too low computer's number is %d\n",computerchoice);
    }
    else if(userchoice>computerchoice)
    {
        printf("Too high computer's number is %d\n",computerchoice);
    }
    else
    {
        printf("Equal computer's number is %d\n",computerchoice);
    }
    trials++;
    } while ( userchoice!=computerchoice);
    // compares the computer choice and user choice and prints out of users choice is too low,high or equal to computers
     
    printf("Your trial number is %d",trials);
    
    return 0;
}