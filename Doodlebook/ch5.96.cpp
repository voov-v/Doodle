#include <stdio.h>

int main() {
    int arr[10][10];

    int a, b;

    scanf_s("%d %d", &a, &b);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf_s("%d", &arr[i][j]);   
        }
    }

    for (int i = 0; i < a; i++)
    {
        int num = 0;
        for (int j = 0; j < b; j++)
        {
            num += arr[i][j];
        }
        printf("%d\n", num);
    }
}