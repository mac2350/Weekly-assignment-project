#include <stdio.h>
/*
Name: Macevady Mac Nganga
REGISTRATION NUMBER: CT100/G/26121/25
DESCRIPTION: Program that uses a 2D array to display the room occupied in a hotel with five floors each having 10 rooms.
*/

int main()
{
    // occupance of each room on differnt floors
    int occupance[5][10] = { {1,0,1,1,0,1,1,0,0,1}, {1,0,0,0,1,1,1,1,0,0}, {1,1,1,0,0,0,1,1,1,0}, {1,1,1,1,1,1,1,1,1,1}, {0,0,0,0,1,1,0,1,0,1}};
    // [5] number of floors [10] number of rooms per floor
    
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 10; j++) 
        {
            printf("%d\t", occupance[i][j]);//outputs occupance of each room
        }
        printf("\n");// ensures each floor has its own line
    }
return 0;
}