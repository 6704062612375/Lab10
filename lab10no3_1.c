#include <stdio.h>
#include <stdlib.h>

struct Books{
    int BookID;
    char BookTitle[50];
} ComputerBook;

void DisplayData(struct Books CBook);

int main() {
    printf("Enter Book ID :");
    scanf("%d", &ComputerBook.BookID);
    printf("Enter Book Title :");
    scanf("%s", ComputerBook.BookTitle);
    DisplayData(ComputerBook);
    return 0;
}

void DisplayData(struct Books CBook){
    printf("Book ID : %d \n", CBook.BookID);        // ?????: ??? CBook.BookID
    printf("Book Title : %s \n", CBook.BookTitle);  // ?????: ??? CBook.BookTitle
}

//void DisplayData(struct Books CBook) is a function that receives a parameter as a struct Books type by pass by value and returns nothing. Its function is to display the book information received.

//struct Books CBook which is a variable of type struct Books that stores book information, CBook.BookID - Book ID (int type), CBook.BookTitle - Book title (char array of size 50).

