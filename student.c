#include <stdio.h>
/*
Name: Macevady Mac Nganga
REGISTRATION NUMBER: CT100/G/26121/25
DESCRIPTION: Program that enters students detail in file and retrieves them back from file
*/


struct students//student structure
{
    char name[100];
    int marks;
    char reg_no[100];
};





int main()
{
    FILE*file;
    file=fopen("results.dat","wb");

    struct students number[5]={
        {"Alice Smith", 101, 85.5},
        {"Bob Johnson", 102, 72.0},
        {"Charlie Brown", 103, 91.2}
    };

    if(file==NULL)
     {
        printf("File doesnt exist");
        return 1;
     }

     fwrite(number, sizeof(struct students),1,file);

     FILE*files;
    files=fopen("results.dat","rb");
    

     if(files==NULL)
     {
        printf("File doesnt exist");
        return 1;
     }

      fread(&number, sizeof(struct students), 1, files);
      printf("Name: %s, Reg No: %d, Marks: %.2f\n",
               number->name, number->marks, number->marks);

     
     
    

    fclose(file);
     return 0;
}



