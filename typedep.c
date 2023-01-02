//Introduction to typedef
/*#include<stdio.h>
int main()
{
    typedef char LETTER;
    LETTER ch;
    ch='A';
    printf("Ch=%c\n",ch);
    return 0;
}*/
#include<stdio.h>
struct book
{
    char name[20];
    int price;
};
int main()
{
    typedef struct book Book;
    Book b={"Amar jibonkotha",350};
    printf("Book name = %s\n",b.name);
    printf("Book price = %d\n",b.price);
}