#include <stdio.h>
/*
Name: Macevady Mac Nganga
REGISTRATION NUMBER: CT100/G/26121/25
DESCRIPTION: Program that has revenue as a 1D array and calculate the total weekly revenue
             and its average.
*/

int main()
{
    // 1D array containg revenue of each day
    int revenue[7]={1000,2500,1500,4000,3500,2400,2000};
    int weeklyRevenue=0;//total revenue
    int averageRevenue;//average revenue
    int length=sizeof(revenue)/sizeof(revenue[0]);// find size of the array
    for(int i=0;i<length;i++)
    {
        weeklyRevenue+=revenue[i];// adding up the revenue of the week
    }
    printf("Total weekly revenue %d\n",weeklyRevenue);// output of total revenue

    averageRevenue=weeklyRevenue/length;// averaging the weeklyRevenue

    printf("Average weekly revenue is %d",averageRevenue);//output of average revenue

    return 0;
    
}