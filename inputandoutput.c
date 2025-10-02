#include <stdio.h>
/*
Name: Macevady Mac Nganga
REGISTRATION NUMBER: CT100/G/26121/25
DESCRIPTION: Program that prompt's user to enter input of height,phone number and weight and produces them as output.
*/
int main()
{
    int height;
    int phoneNo;
    int weight;
    int count=0;
    
    // input 
    printf("height: ");
    scanf("%d",&height);
    if(height>=6)
    {
        printf("You are tall\n");
    }
    else
    {
        printf("You are short\n");
    }
    printf("Phone no: ");
    scanf("%d",&phoneNo);
    // counting number of digits in phoneNo

    
    printf("weight: ");
    scanf("%d",&weight);

    //output
    printf("Your height is %d feet\n",height);
    printf("Your phoneNo is %d\n",phoneNo);
    printf("Your weight is %dkg",weight);




    return 0;
}