#include <stdio.h>

int main() {
    int n;

    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        int a;
        a = i % 10;

        if (a != 0 && a % 3 == 0) {
            printf("* ");
        }
        else {
            printf("%d ", i);
        }
    }
}