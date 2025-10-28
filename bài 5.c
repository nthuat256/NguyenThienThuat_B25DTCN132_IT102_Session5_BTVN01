#include <stdio.h>
int main() {
    float tuoi, giaVe = 20000, soTienPhaiTra;
    printf("Nhap do tuoi: ");
    scanf("%f", &tuoi);
    if (tuoi > 0 && tuoi < 6) {
        soTienPhaiTra = giaVe * (1 - 1.0);
    } else if (tuoi >= 6 && tuoi < 19) {
        soTienPhaiTra = giaVe * (1 - 0.5);
    } else if (tuoi >= 19 && tuoi <= 60) {
        soTienPhaiTra = giaVe;
    } else if (tuoi > 60) {
        soTienPhaiTra = giaVe * (1 - 0.3);
    } else {
        printf("So tuoi khong hop le!\n");
        return 1;
    }
    printf("Gia ve goc: %.0f VND\n", giaVe);
    printf("So tien ve phai tra: %.0f VND\n", soTienPhaiTra);
    return 0;
}

