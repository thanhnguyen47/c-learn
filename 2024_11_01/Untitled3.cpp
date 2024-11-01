# include <stdio.h>

int main() {
//	int a = 4;
//	int *ptr = &a;
//	int *ptr2;
//	ptr2 = &a;
//	
//	*ptr2 = 5;
//	
//	printf("%d\n", a); // ->4
//	printf("%d\n", &a); // -> asdf
//	printf("%d\n", ptr); // -> asdf
//	printf("%d\n", *ptr); // -> 4
//	printf("%d %d", ptr2, *ptr2); // asdf, 5
//	
	int arr[5] = {1, 2, 3, 4, 5};
	printf("%d %d\n", &arr[0], arr[0]);
	printf("%d %d", arr, *(arr+1));
	
	// cap phat dong bang alloc void --> ep kieu sang mot kieu cu the
}
