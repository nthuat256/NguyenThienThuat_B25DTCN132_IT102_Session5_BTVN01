#include <stdio.h>

int main() {
    int a, b, c, temp;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap c: ");
    scanf("%d", &c);
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    printf("Thu tu tang dan: %d %d %d\n", a, b, c);
    return 0;
}

