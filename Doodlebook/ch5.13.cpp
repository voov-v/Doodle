#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "hello";
    char s2[100];

    strcpy_s(s2, s1);
    printf("%s", s2);

}
// strcpy_s(s2, "hello"); 도 가능