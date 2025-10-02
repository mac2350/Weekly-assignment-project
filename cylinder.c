#include <stdio.h>
/*
Name: Macevady Mac Nganga
REGISTRATION NUMBER: CT100/G/26121/25
DESCRIPTION: Program that prompt's user for radius and volume and provides surface area and volume as output.
*/

int main()
{
     double radius;
     double height;
     const double PI=3.14159;

    //enter radius
    printf("enter radius: ");
    scanf("%lf",&radius);

    //enter height
    printf("enter height: ");
    scanf("%lf",&height);

    //finding area
    double area=2*PI*radius*radius+2*PI*radius*height;
    //finding volume
    double volume=PI*radius*radius*height;
    //printing surface area
    printf("The area is %lf \n",area);
    //printing out volume
    printf("The volume is %lf",volume);

    return 0;
}