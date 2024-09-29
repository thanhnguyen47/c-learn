#include <stdio.h>

int main() {
	
//	int n;
//	scanf("%d", &n);

//	//for (gia tri khoi tao; dieu kien thoat; buoc nhay)
//	for (int i = 1; i <= n; i++) {
//		printf("%d: hello world!\n", i);
//	}
//	
	
	// tinh tong day so tu 1 -> n
//	int res = 0;
//	for (int i = 1; i <= n; i++) {
//		res += i;
//	}
//	printf("result: %d", res);

	// tinh tong cac so chan tu 1 -> n
//	int res = 0;
//	for (int i = 2; i <= n; i+=2) {
//		res += i;
//	}
//	printf("result: %d", res);



	/*
	*********
	*********
	*********
	*********
	*********
	*/
	
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
