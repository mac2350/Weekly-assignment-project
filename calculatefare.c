#include <stdio.h>
/*
Name: Macevady Mac Nganga
REGISTRATION NUMBER: CT100/G/26121/25
DESCRIPTION: Program that prompt's user to enter distance covered and calculates the fare needed.
*/
int main()
{
    int distance;
    int fare;
    //input of distance
    printf("Enter distance covered: ");
    scanf("%d",&distance);
    //calculation of fare
    fare=distance*50;
    //output of total fare
    printf("Your fare is %d",fare);

    return 0;
}