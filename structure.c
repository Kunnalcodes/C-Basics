#include <stdio.h>
#include <string.h>

struct bookbank
{
    char author[100];
    char title[100];
    int year;
    float price;
};

int main()
{
    struct bookbank book1 = {"Kips", "CPPS", 2021, 200.0};
    struct bookbank book2 = {"Balaswami", "CS", 2022, 250.0};

    printf("The book author is: %s\n", book1.author);
    printf("The book title is: %s\n", book1.title);
    printf("The book year is: %d\n", book1.year);
    printf("The book price is: %f\n", book1.price);

    printf("\n");

    printf("The book author is: %s\n", book2.author);
    printf("The book title is: %s\n", book2.title);
    printf("The book year is: %d\n", book2.year);
    printf("The book price is: %f\n", book2.price);

    return 0;
}