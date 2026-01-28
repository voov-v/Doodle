#include <stdio.h>

#define SQUARE(X) X * X
#define SQUARE1(X) (X) * (X)
#define SQUARE2(X) ( (X) * (X) )

int main() {
    int a = 5;

    printf("%d\n", SQUARE(a));          // 5 * 5
    printf("%d\n", SQUARE(a + 1));      // 5 + 1 * 5 + 1
       
    printf("%d\n", SQUARE1(a + 1));     // (5 + 1) * (5 + 1)
    printf("%d\n", 100 / SQUARE1(a));   // 100 / (5) * (5)

    printf("%d\n", 100 / SQUARE2(a));   // 100 / ( (5) * (5) )
}
