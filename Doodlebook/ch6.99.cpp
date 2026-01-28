#include <stdio.h>
#include <string>

void printNoSpace(const char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] != ' ')
        {
            printf("%c", str[i]);
        }
    }
}

int main() {
    printNoSpace("Hello, World\n");
    printNoSpace("My name is Doodle\n");
}