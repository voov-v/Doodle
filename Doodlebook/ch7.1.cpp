#include <stdio.h>

int main() {
    struct { float x, y; } pos;
    pos.x = 1.5;
    pos.y = 2.2;
    printf("%f %f\n", pos.x, pos.y);
}