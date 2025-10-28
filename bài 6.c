#include <stdio.h>
int main() {
    float a, b;
    char op;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap toan tu (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Nhap b: ");
    scanf("%f", &b);
    switch(op) {
        case '+': printf("Ket qua: %.2f\n", a + b);
        break;
        case '-': printf("Ket qua: %.2f\n", a - b);
        break;
        case '*': printf("Ket qua: %.2f\n", a * b);
        break;
        case '/':
            if (b == 0) printf("Loi: Khong the chia cho 0\n");
            else printf("Ket qua: %.2f\n", a / b);
            break;
        default: printf("Loi: Toan tu khong hop le\n");
    }
    return 0;
}

