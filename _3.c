#include <stdio.h> 

int main() {
	int num;
	scanf("%d", &num);
	
//	num < 0 --> less than 0
//	num = 0 --> zero
//	num =1 --> one
//	num = 2 --> two
//	.. > 4 --> greater than 4

//	if (num < 0) {
//		printf("less than 0\n");
//	} else if (num == 0) {
//		printf("zero\n");
//	} else if (num == 1) {
//		printf("one\n");
//	} else if (num == 2) {
//		printf("two\n");
//	} else if (num == 3) {
//		printf("three\n");
//	} else if (num == 4) {
//		printf("four\n");
//	} else {
//		printf("greater than 4");
//	}
	
	switch (num) {
		case 0:
			printf("zero\n");
			break;
		case 1:
			printf("one\n");
			break; // lenh thoat khoi vong lap
		case 2:
			printf("two\n");
//			break;
		case 3:
			printf("three\n");
			break;
		case 4:
			printf("four\n");
			break;
		default:
			printf("not in [0, 4]");
	}
	
	return 0;
}
