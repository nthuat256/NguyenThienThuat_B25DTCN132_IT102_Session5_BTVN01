#include <stdio.h>
int main() {
	int n;
	printf("nhap so diem trung binh: ",n);
	scanf("%d",&n);
	if (n>=8&&n<=10) {
		printf("hoc luc gioi");
	}else if(n>=6.5&&n<8) {
		printf("hoc luc kha");
	}else if(n>=5&&n<6.5) {
		printf("hoc luc trung binh");
	}else if(n<5&&n>=0) {
		printf("hoc luc yeu");
	}else {
		printf ("khong hop le");
	}
	return 0;
}
