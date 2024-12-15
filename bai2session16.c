#include <stdio.h>

void swap(int *a, int *b);
int main() {
    int x = 10, y = 20;

    printf("Gia tri ban dau: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("Gia tri sau khi doi: x = %d, y = %d\n", x, y);

    return 0;
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
