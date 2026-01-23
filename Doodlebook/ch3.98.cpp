#include <stdio.h>

int main() {
    float kg;
    float m;
    scanf_s("%f%f", &kg, &m);
    float BMI = kg / (m * m);
    printf("%f", BMI);

}