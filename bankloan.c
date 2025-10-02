#include <stdio.h>
/*
Name: Macevady Mac Nganga
REGISTRATION NUMBER: CT100/G/26121/25
DESCRIPTION: Program that prompt's user to age and annual income,check if user is worthy of loan and print out the answer.
*/
int main()
{
    int age;
    double income;

    //input
    printf("What is your age?: ");
    scanf("%d",&age);

    printf("What is your annual income?: ");
    scanf("%lf",&income);

    //condition for loan
    if(age>=21 && income>=21000)
    {
        printf("Congratulations you qualify for a loan");
    }
    else
    {
        printf("Unfortunatly, we are unable to offer you a loan at this time");
    }
    return 0;
}