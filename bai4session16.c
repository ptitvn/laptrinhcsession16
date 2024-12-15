#include <stdio.h>

void inMang(int arr[], int n);
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); 

    printf("Cac phan tu trong mang:\n");
    inMang(arr, n);

    return 0;
}
void inMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
