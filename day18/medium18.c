/*
problem name : 

write a program to create structure of books thats hold the value of name price and pagecount.

#include<stdio.h>
#include<string.h>

int main()
{ 
    typedef struct bookn{
        char name[50];
        int price;
        int pagecount;
    } bookn ;

    bookn book;
    strcpy(book.name,"sufi ka sasar");
    book.pagecount = 50;
    book.price = 100;

    printf("the book name : %s\nbook price : %d\nbook page count : %d\n\n",book.name,book.price,book.pagecount);

    struct bookn book1;
    strcpy(book1.name,"rich dad poor dad");
    book1.pagecount = 80;
    book1.price = 250;

    printf("the book name : %s\nbook price : %d\nbook page count : %d\n\n",book1.name,book1.price,book1.pagecount);


    return 0;
}
