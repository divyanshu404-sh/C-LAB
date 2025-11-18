//Nested Structure with Functions – Library System: Define a structure Book containing title,
//author, and id. Create another structure Library containing an array of books and a count of total
//books. Write functions to:
//.   (a) Add a book.
//.   (b) Display all books.
//.   (c) Search a book by title.

#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

struct Library {
    struct Book b[50];
    int count;
};

int main() {
    struct Library lib;
    lib.count = 0;
    int ch, i;
    char name[50];

    while (1) {
        printf("\n1.Add  2.Show  3.Search  4.Exit\n");
        scanf("%d", &ch);
        getchar();

        if (ch == 1) {
            printf("ID: ");
            scanf("%d", &lib.b[lib.count].id);
            getchar();
            printf("Title: ");
            fgets(lib.b[lib.count].title, 50, stdin);
            lib.b[lib.count].title[strcspn(lib.b[lib.count].title, "\n")] = 0;
            printf("Author: ");
            fgets(lib.b[lib.count].author, 50, stdin);
            lib.b[lib.count].author[strcspn(lib.b[lib.count].author, "\n")] = 0;
            lib.count++;
            printf("Book added!\n");
        } 
        
        else if (ch == 2) {
            for (i = 0; i < lib.count; i++)
                printf("%d %s %s\n", lib.b[i].id, lib.b[i].title, lib.b[i].author);
            if (lib.count == 0) printf("No books\n");
        } 
        
        else if (ch == 3) {
            printf("Enter title: ");
            fgets(name, 50, stdin);
            name[strcspn(name, "\n")] = 0;
            int f = 0;
            for (i = 0; i < lib.count; i++)
                if (strcmp(lib.b[i].title, name) == 0) {
                    printf("Found: %d %s %s\n", lib.b[i].id, lib.b[i].title, lib.b[i].author);
                    f = 1;
                }
            if (!f) printf("Not found\n");
        } 
        
        else if (ch == 4)
            break;
        
        else
            printf("Invalid\n");
    }
}