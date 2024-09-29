#include <stdio.h>

int main() {
	int sum = 0;
	while(1) {
		printf("------------------------------------\n");
		printf("		thong dong coffee			\n");
		printf("------------------------------------\n");
		printf("		menu						\n");
		printf("1. bac xiu 1k\n");
		printf("2. den 2k\n");
		printf("3. nau 3k\n");
		printf("4. di ve\n");
		printf("you choose?");
		int option;
		scanf("%d", &option);
		if (option == 1) {
			sum += 1;
		} else if (option == 2) {
			sum += 2;
		} else if (option == 3) {
			sum += 3;
		} else if (option == 4) {
			printf("your order: %d", sum);
			break;
		} else {
			printf("invalid option");
		}
		
	}
}
