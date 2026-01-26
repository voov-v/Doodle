#include <stdio.h>

int main() {
    int arr[3][3] = { 0 };      // 시작 주소값을 100이라고 가정

    printf("%d\n", &arr);       // 100
    printf("%d\n", arr);        // 0  --> 100
    printf("%d\n", *arr);       // 100

    printf("%d\n", &arr[0]);    // 100
    printf("%d\n", arr[0]);     // 100
    printf("%d\n", *arr[0]);    // 100 --> 0

    printf("%d\n", &arr[0][0]); // 100
    printf("%d\n", arr[0][0]);  // 100 --> 0
}