#include <stdio.h>

int main() {
    int arr[3][3] = { 0 };          // arr 시작 주소 100 이라고 가정

    printf("%d\n", &arr[0][0]);     // 100
    printf("%d\n", arr[0] + 1);     // 112 --> 104
    printf("%d\n", &arr[0] + 1);    // 104? --> 112
    printf("%d\n", arr + 1);        // 112
    printf("%d\n", &arr + 1);       // 104 --> 136
}