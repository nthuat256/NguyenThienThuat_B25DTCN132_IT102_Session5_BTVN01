int main() {
    float kwh, tienBacThang, phuPhi, tongTien;
    int loaiHo;
    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%f", &kwh);
    printf("Chon loai ho tieu dung:\n");
    printf("1 - Ho gia dinh\n");
    printf("2 - Ho kinh doanh\n");
    printf("3 - Ho san xuat\n");
    printf("Nhap lua chon (1,2,3): ");
    scanf("%d", &loaiHo);
    if (kwh <= 50&& kwh>0)
        tienBacThang = kwh * 1500;
    else if (kwh <= 100&& kwh>50)
        tienBacThang = 50 * 1500 + (kwh - 50) * 2000;
    else if (kwh <= 200&& kwh>100)
        tienBacThang = 50 * 1500 + 50 * 2000 + (kwh - 100) * 2500;
    else
        tienBacThang = 50 * 1500 + 50 * 2000 + 100 * 2500 + (kwh - 200) * 3000;
    switch (loaiHo) {
        case 1: phuPhi = tienBacThang * 0.05; 
            break;
        case 2: phuPhi = tienBacThang * 0.10; 
            break;
        case 3: phuPhi = tienBacThang * 0.08; 
            break;
        default:
            printf("Loai ho khong hop le!\n");
            return 0;
    }
    tongTien = tienBacThang + phuPhi;
    printf("Tien dien phai tra: %.0f VND\n", tongTien);
    return 0;
}


