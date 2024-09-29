# include <stdio.h>

int main() {
	// nhap 1 so nguyen int trong khoang tu 1 -> 10, nhap bao gio thoa man thi thoi.
	
	int a;
	do {
		printf("nhap a: ");
		scanf("%d", &a);
		if (a > 10 || a < 1) 
			printf("nhap lai\n");
	} while (a > 10 || a < 1);
	
	printf("a = %d", a);
}
