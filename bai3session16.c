#include <stdio.h>

void tinhTong(int a, int b, int *result);
int main() {
    int num1 = 10, num2 = 20, tong;

    printf("So thu nhat: %d\n", num1);
    printf("So thu hai: %d\n", num2);

    tinhTong(num1, num2, &tong);

    printf("Tong cua hai so la: %d\n", tong);

    return 0;
}
void tinhTong(int a, int b, int *result) {
    *result = a + b;
}