#include <stdio.h>
int main() {
    char a;
    printf("Nhap mot ky tu: ");
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z') {
        a = a - 32;
        printf("Chu hoa tuong ung: %c\n", a);
    }
    else if (a >= 'A' && a <= 'Z') {
        a = a + 32;
        printf("Chu thuong tuong ung: %c\n", a);
    }
    else {
        printf("Khong phai chu cai.\n");
    }
    return 0;
}

