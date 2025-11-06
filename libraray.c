#include <stdio.h>
#include <ctype.h>




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