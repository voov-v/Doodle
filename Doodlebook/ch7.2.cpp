#include <stdio.h>

struct ProductInfo {
    int num;
    char name[100];
    int cost;
};

int main() {
    ProductInfo myProduct = { 333333, "가나 초콜릿", 1500 };
    ProductInfo yourProduct = myProduct;

    printf("%d\n", myProduct.num);
    printf("%s\n", myProduct.name);
    printf("%d\n", myProduct.cost);
    
    printf("%d\n%s\n%d\n", yourProduct.num, yourProduct.name, yourProduct.cost);
}