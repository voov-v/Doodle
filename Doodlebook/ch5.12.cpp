#include <stdio.h>
#include <string.h>

int main() {
    char s[100] = "hello"; // 배열 칸수는 100이지만 문자열의 길이는 5
    int len = strlen(s);

    printf("배열의 칸수: %d\n", sizeof(s) / sizeof(char));
    printf("문자열의 길이: %d", len);
}

// / sizeof(char)를 빼도 같음