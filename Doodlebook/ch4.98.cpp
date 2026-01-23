#include <stdio.h>

int main() {
    int n;

    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a += 2;
        }
        printf("\n");
    }
}

//“j번째 홀수 = 2 * j - 1” 공식
//#include <stdio.h>
//
//int main() {
//    int n;
//    scanf_s("%d", &n);
//
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            printf("%d ", 2 * j - 1);
//        }
//        printf("\n");
//    }
//}