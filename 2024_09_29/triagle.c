# include <stdio.h>

int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	// ve tam giac
//	****\n
//	_***\n
//	__**\n
//	___*\n
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j < i){
				printf(" ");
			} else { // j >= i
				printf("*");
			}
		}
		printf("\n");
	}
	
	return 0;
}
