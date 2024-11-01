# include <stdio.h>

void greeting() {
	printf("hello world\n");
}

int add(int a, int b) {
	return a + b;
}

// c chi co mot kieu truyen gia tri tham so vao ham la truyen tham tri.
// nghia la no se truyen vao ban sao gia tri cua tham so.
void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	greeting();
	int c = add(1, 2);
	printf("%d\n", c);
	int a = 1, b = 2;
	swap(&a, &b);
	printf("a = %d,  b = %d", a, b);
	return 0;
}
