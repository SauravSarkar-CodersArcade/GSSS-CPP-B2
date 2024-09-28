#include <iostream>
#include <string.h>
using namespace std;
struct Store {
    int price;
    // Shirt
    union {
        struct {
            char size[10];
            char color[10];
            char brand[20];
        } shirt;
        // Book
        struct {
            char genre[20];
            char design[20];
            int isbn;
        } book;
    }item;
};
int main() {
    struct Store i;
    strcpy(i.item.book.genre, "Fiction");
    strcpy(i.item.book.design, "E-Book");
    i.price = 300;
    i.item.book.isbn = 201;
    cout << "Book Size: " << sizeof(i) << " Bytes"<< endl;
    return 0;
}
