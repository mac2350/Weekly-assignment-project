#include <stdio.h>
/*
Name: Macevady Mac Nganga
REGISTRATION NUMBER: CT100/G/26121/25
DESCRIPTION: Program that prompt's user to enter fanhrenhit and coverts it into celcuis.
*/
int main()
{
    float Fahren;
    float c;
    //input
    printf("Enter Fahrenheit: ");
    scanf("%f",&Fahren);
    //converting to celcius
    c=(Fahren-32)*5/9;
    //output
    printf("%f",c);

    return 0;
}