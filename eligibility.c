#include <stdio.h>
/*
Name: Macevady Mac Nganga
REGISTRATION NUMBER: CT100/G/26121/25
DESCRIPTION: Program that prompt's user for attendance and average marks and determines if they qualify for the final exams.
*/
int main()
{
    // class attendance
    int atten;
    // average marks
    int marks;
    // input for class attendance
    printf("enter class attendance: ");
    scanf("%d",&atten);
    // input for average marks
    printf("enter averge marks: ");
    scanf("%d",&marks);
    //determines if they qualify for final exams
    if(atten>=75 && marks>=40)
    {
        //output if qualify
        printf("You are eligable for final examination");
    }
    else
    {
        //output if they do not qualify
        printf("you are not eligable");
    }
    return 0;

}