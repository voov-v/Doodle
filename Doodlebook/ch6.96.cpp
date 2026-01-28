#include <stdio.h>

int parity(int n) {
    return n % 2 != 0;
}

int main() {
    printf("%d\n", parity(5));
    printf("%d\n", parity(-2));
    printf("%d\n", parity(6));
}