#include <stdio.h>

int main() {
    int number = 10;
    int *ptr = &number;

    printf("Gia tri cua bien number: %d\n", number);
    printf("Dia chi cua bien number: %p\n", &number);
    printf("Gia tri ma con tro ptr dang tro toi la: %d\n", *ptr);
    printf("Dia chi ma con tro ptr dang tro toi la: %p\n", ptr);

    return 0;
}