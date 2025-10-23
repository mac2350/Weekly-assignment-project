#include <stdio.h>
/*
Name: Macevady Mac Nganga
REGISTRATION NUMBER: CT100/G/26121/25
DESCRIPTION: Program that prompt's user to enter number of units used and calculates the bill and returs the 
total.
*/
void electrical_bill(int units,int bill);//module

int main()
{
    int units;
    int bill;

    //input of unit used
    printf("enter units: ");
    scanf("%d",&units);

    electrical_bill(units,bill);

    

    return 0;

}
void electrical_bill(int units,int bill)
{
    // calculate of bill
    if(units>0 && units<=100)
    {
        bill=units*10;
    }
    else if(units<=200)
    {
        bill=100*10+(units-100)*15;
    }
    else
    {
        bill=100*10+100*15+(units-200)*20;
    }
    //output of total bill
    printf("%d",bill);
    
}