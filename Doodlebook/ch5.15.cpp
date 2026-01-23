#include <stdio.h>
#include <string.h>

int main() {
    char s[100] = "hello ";
    char name[] = "Doodle";

    strcat_s(s, name);
    strcat_s(s, "!");

    printf("%s", s);
}