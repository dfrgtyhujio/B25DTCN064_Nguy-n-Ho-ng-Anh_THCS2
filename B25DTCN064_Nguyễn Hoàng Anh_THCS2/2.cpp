#include <stdio.h>

int main() {
    int x, y;

    printf("Nhap so nguyen x: ");
    scanf("%d", &x);

    printf("Nhap so nguyen y: ");
    scanf("%d", &y);

    printf("\nTong: %d + %d = %d", x, y, x + y);
    printf("\nHieu: %d - %d = %d", x, y, x - y);
    printf("\nTich: %d * %d = %d", x, y, x * y);

    if (y != 0) {
        printf("\nThuong: %d / %d = %d", x, y, x / y);
        printf("\nPhan du: %d %% %d = %d", x, y, x % y);
    } else {
        printf("\nKhong the thuc hien phep chia vi y = 0.");
    }

    printf("\n\nSo sanh:");
    if (x > y) {
        printf("\n%d lon hon %d", x, y);
    } else if (x < y) {
        printf("\n%d nho hon %d", x, y);
    } else {
        printf("\n%d bang %d", x, y);
    }

    return 0;
}

