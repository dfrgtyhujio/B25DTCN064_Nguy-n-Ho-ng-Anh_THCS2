#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Nhap chuoi: ");
    scanf("%s", str);

    printf("Do dai chuoi: %lu\n", strlen(str));

    if (strcmp(str, "hello") == 0)
        printf("Chuoi giong 'hello'\n");
    else
        printf("Chuoi khac 'hello'\n");

    return 0;
}

