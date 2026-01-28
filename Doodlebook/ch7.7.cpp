#include <stdio.h>

struct ProductInfo {
    int num;
    char name[100];
    int cost;
};

void productSwap(ProductInfo* a, ProductInfo* b) {
    ProductInfo tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    ProductInfo myProject = { 33333, "가나 초콜릿", 1500 };
    ProductInfo yourProject = { 44444, "초코 우유", 1200 };

    productSwap(&myProject, &yourProject);

    printf("%d\n%s\n%d\n", myProject.num, myProject.name, myProject.cost);
}