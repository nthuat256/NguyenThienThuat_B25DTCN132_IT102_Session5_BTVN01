#include <stdio.h>
int main() {
    float heSo, luong, phuCap, thuong = 0;
    int ngayCong, chucVu;
    printf("Nhap he so luong: ");
    scanf("%f", &heSo);
    if (heSo <= 0) {
        printf("Loi: He so luong phai lon hon 0!\n");
        return 0;
    }
    printf("Nhap so ngay cong: ");
    scanf("%d", &ngayCong);
    if (ngayCong<=0) {
    	printf("Loi: He so luong phai lon hon 0!\n");
    	return 0;
	}
    printf("Chon chuc vu:\n");
    printf("1 - Nhan vien\n");
    printf("2 - To truong\n");
    printf("3 - Quan ly\n");
    printf("Nhap lua chon (1,2,3): ");
    scanf("%d", &chucVu);
    if (chucVu < 1&&chucVu > 3) {
        printf("Lua chon khong hop le! Hay nhap lai.\n");
    }else (chucVu < 1&&chucVu > 3);
    switch (chucVu) {
        case 1: phuCap = 500000; 
		break;
        case 2: phuCap = 1000000; 
		break;
        case 3: phuCap = 2000000; 
		break;
        default:
            printf("Chuc vu khong hop le!\n");
            return 0;
    }
    if (ngayCong > 26)
        thuong = (ngayCong - 26) * 200000;
    luong = ngayCong * 160000 * heSo + phuCap + thuong;
    printf("Luong nhan duoc: %.0f VND\n", luong);
    return 0;
}

