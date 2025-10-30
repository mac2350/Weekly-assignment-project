#include <stdio.h>
/*
Name: Macevady Mac Nganga
REGISTRATION NUMBER: CT100/G/26121/25
DESCRIPTION: Program that uses a 3D array to display the rooms occupied in 3 branches of a hotel each having five floors and each having 10 rooms
            and counts the number of rooms occupied and provides them as output.
*/

int main()
{
    // occupance each branch of each room on differnt floors
    int occupance[3][5][10] ={ { {1,0,1,1,0,1,1,0,0,1}, {1,0,0,0,1,1,1,1,0,0}, {1,1,1,0,0,0,1,1,1,0}, {1,1,1,1,1,1,1,1,1,1}, {0,0,0,0,1,1,0,1,0,1}}, { {1,0,1,1,0,1,1,0,0,1}, {1,0,0,0,1,1,1,1,0,0}, {1,1,1,0,0,0,1,1,1,0}, {1,1,1,1,1,1,1,1,1,1}, {0,0,0,0,1,1,0,1,0,1}},{ {1,0,1,1,0,1,1,0,0,1}, {1,0,0,0,1,1,1,1,0,0}, {1,1,1,0,0,0,1,1,1,0}, {1,1,1,1,1,1,1,1,1,1}, {0,0,0,0,1,1,0,1,0,1}}};
    //[3] number of branches [5] number of floors [10] number of rooms per floor

    int occupied=0;// number of rooms occupies
    for(int i=0;i<3;i++)
    {
        for (int x=0;x<5;x++) 
    {
        for (int j=0;j<10;j++) 
        {
            printf("%d\t", occupance[i][x][j]);// output occupance of each room
            if(occupance[i][x][j]==1)// checks every room for occupance and adds 1 to occupied
            {
                occupied++;
            }
            
        }
        printf("\n");// ensures each floor has its own line
    }
    printf("\n");// ensures that each branch is separated from the others

    }
    printf("Total occupied room is %d", occupied);// outputs number of occupied rooms
    
return 0;
}