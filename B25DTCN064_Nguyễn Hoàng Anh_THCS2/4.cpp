#include <stdio.h>
#include <math.h>

int main() {
    float x;

    printf("Nhap so thuc x: ");
    scanf("%f", &x);

    float canBacHai = sqrt(x);
    float luyThua = pow(x, 3);

    printf("Can bac hai cua %.2f la: %.2f\n", x, canBacHai);
    printf("Luy thua bac 3 cua %.2f la: %.2f\n", x, luyThua);

    return 0;
}

