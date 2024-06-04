#include <stdio.h>

struct {
    char title[30];
    float price;
    int pages;
} book1 = {"let us C", 45.78, 120};

int main() {
    printf("%s %f %d\n", book1.title, book1.price, book1.pages);
    return 0;
}
