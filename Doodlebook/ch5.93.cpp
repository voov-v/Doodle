#include <stdio.h>

int main() {
    int arr[100];
    int a;

    scanf_s("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf_s("%d", &arr[i]);
    }

    for (int i = 1; i < a; i+=2)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    for (int i = 0; i < a; i += 2)
    {
        printf("%d ", arr[i]);
    }
}