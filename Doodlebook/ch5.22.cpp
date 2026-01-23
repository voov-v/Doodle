#include <stdio.h>

int main() {
    int a = 10;
    int* ptr_a = &a;
    int** ptr_ptr_a = &ptr_a;

    // a의 값
    printf("1. a = %d\n", a);
    // a의 주소값
    printf("2. &a = %d\n", &a);
    // ptr_a의 값 == a의 주소값
    printf("3. ptr_a = %d\n", ptr_a);
    // ptr_a의 주소값
    printf("4. &ptr_a = %d\n", &ptr_a);
    // ptr_ptr_a의 값 == ptr_a의 주소값
    printf("5. ptr_ptr_a = %d\n", ptr_ptr_a);
    // *ptr_ptr_a == ptr_a이 가리키고 있는 주소값 == &a
    printf("6. *ptr_ptr_a = %d\n", *ptr_ptr_a);
    // **ptr_ptr_a == a의 값
    printf("7. **ptr_ptr_a = %d\n", **ptr_ptr_a);

}