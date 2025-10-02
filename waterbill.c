#include <stdio.h>
/*
Name: Macevady Mac Nganga
REGISTRATION NUMBER: CT100/G/26121/25
DESCRIPTION: Program that prompt's user to enter number of water units consumed, calculates the bill and provide total bill as output.
*/

int main()
{
    //water units
    int units;
    //bill
    float bill;
    
    //input for unit consumed
    printf("enter water units consumed ");
    scanf("%d",&units);
    // calculates total bill
    if(units<=30)
    {
        bill=units*20;
    }
    else if(units>30 && units<=60)
    {
        bill=(30*20)+((units-30)*25);
    }
    else
    {
        bill=(30*20)+((units-30)*25)+((units-60)*30);
    }
    //total bill as output
    printf("Total bill: %.2f",bill);

    return 0;


}