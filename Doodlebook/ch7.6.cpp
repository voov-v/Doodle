#include <stdio.h>

struct ProductInfo {
    int num;
    char name[100];
    int cost;
};

int main() {
    ProductInfo myProduct = { 333333, "가나 초콜릿", 1500 };
    ProductInfo* ptr_Product = &myProduct;

    printf("%d\n%s\n%d\n", ptr_Product->num, ptr_Product->name, ptr_Product->cost);
}