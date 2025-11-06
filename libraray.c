#include <stdio.h>
#include <ctype.h>
/*
Name: Macevady Mac Nganga
REGISTRATION NUMBER: CT100/G/26121/25
DESCRIPTION: Program that enters title of books in file and cormfirms entry
*/




int main()
{
    FILE*books;
    char Title[100];

     books=fopen("borrowed_books.txt.", "a");

     if(books==NULL)
     {
        printf("File doesnt exist");
        return 1;
     }

    printf("Enter book title:");
    fgets(Title,sizeof(Title),stdin);

    fprintf(books,"%s",Title);
    printf("%shas been entered",Title);




    fclose(books);

    return 0;

}
