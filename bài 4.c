#include <stdio.h>

int main(){
	int thang;
	printf("nhap thang1-12: ");
	scanf("%d",&thang);
	switch (thang) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		printf("thang %d co 31 ngay\n",thang);
		break;
		case 4:
		case 6:
		case 9:
		case 11:
		printf("thang %d co 30 ngay\n",thang);
		break;
		case 2:
		printf("thang 2 co 28 hoac 29 ngay\n",thang);
		break;
	default:
		printf("thang khong hop le\n");
			break;
	}
	return 0;
}
