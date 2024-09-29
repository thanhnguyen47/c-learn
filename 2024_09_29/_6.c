#include <stdio.h>

// function --> ham 
// ham main la mot ham dac biet. entry point cua moi chuong trinh c.

//[kieu gia tri tra ve] ten ham ([danh sach cac tham so]) {
//	
//}
//void
int add(int a, int b){
	int res =0;
	res = a + b;
	return res;
} //-->function oriented programming.

int _max(int a, int b, int c){
	int ans = a;
	if (ans < b) ans = b;
	if (ans < c) ans =c;
	
	return ans;
}

int main() {
//	int x, y;
//	scanf("%d %d", &x, &y);
//	
//	printf("%d + %d = %d", x, y, add(x, y));
	
//	printf("%d", _max(-1, 100000000000, -3));

//	ternary operator: toan tu ba ngoi
//	a + b--> toan tu hai ngoi
//	++a, --a, a ++ --> toan tu mot ngoi

//	if (1 < 2) {
//		printf("1 < 2");
//	} else printf("1 > 2");
	
//	char str[20] = 1 < 2 ? "1 < 2" : "1 > 2";
	// cu phap: condition ? true_value : false_value
//	char str[20];
//	if (1 < 2) {
//		str = "1 < 2";
//	}
//	else str = " 1 > 2";
//	
//	condition1 ? ternary op2 : ternary op3;
	int a = 1 < 2 ? (3 > 4 ? 3 : 4): 5;
	printf("%d", a);
}
