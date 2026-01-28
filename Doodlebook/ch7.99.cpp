#include <stdio.h>

struct Point {
    int x, y;
};

void swapXY(Point* p) {
    int swap = p->x;
    p->x = p->y;
    p->y = swap;

}

int main() {
    Point pos = { 3, 4 };

    swapXY(&pos);

    printf("(%d, %d)\n", pos.x, pos.y);
}