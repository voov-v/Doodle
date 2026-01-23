#include <stdio.h>

int main() {
    int num;

    scanf_s("%d", &num);
    if (num < 0 || num > 100)
    {
        printf("다시 입력: ");
        scanf_s("%d", &num);
    }

    if (num >= 90)
    {
        printf("A");
    } 
    else if (num >= 80 && num < 90)
    {
        printf("B");
    }
    else if (num >= 70 && num < 80)
    {
        printf("C");
    }
    else if (num >= 60 && num < 70)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }

}