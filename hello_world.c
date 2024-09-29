#include <stdio.h>

int main() {
	
	int a = 5; // so nguyen co dau: 2 ty. 2^31 -1
	int b = 3;
//	b--; // b -= 1 
//	--b;
//	int c = a % b--; // modulo
//	++a; // thu tu uu tien cao
//	a++; // thu tu uu tien thap
//	int c = a % --b; // a = 5, b = 2, c = 1.
	
//	printf("%d mod %d = %d", ++a, b, c); 
	
//	a += b; // a = a + b;
	
	a -= b; // a = a - b;
//	/=, *=, %=
	printf("%d", a);	
	return 0;
} 

//3/2 = 1 du 1
//1/2 =0 du 1

//float 3.0/2 =1.5

//so nguyen khong dau: n bit de bieu dien --> [0, 2^n  -1 ]
//
//so nguyen co dau: n bit de bieu dien --> [-2^(n-1), 2^(n-1)  -1]

