#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	if(n % 3 ==0&&n%5==0) {
		printf("so nguyen chia het cho 3 va chia het cho 5\n");
	}else if(n % 3 == 0){
		printf("so nguyen chia het cho 3\n");
	} else if(n % 5 == 0) {
		printf("so nguyen chia het cho 5\n");
	}else {
		printf("so nguyen khong chia het cho 3 va 5\n");
	}
	return 0;
}
