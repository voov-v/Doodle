#include <stdio.h>

int main() {
    int arr[10] = { 3, 1 ,4 ,5, 9, 2, 6 ,5 ,3 };

    printf("%d\n", arr); // 100이 출력된다고 가정
    for (int i = 3; i < 7; i++) {
        printf("%d %d\n", arr + i, *(arr + i));   // 4번째부터 8번째 주소, 값
    }
}