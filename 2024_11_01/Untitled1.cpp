# include <stdio.h>

// de bai: tinh tong cua day so n phan tu. n nhap tu ban phim
int main() {
	int arr[1000]; // bat dau tu chi so 0 -> 4
	// --> 4 * 1000 = 4000 bytes
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	// nhap day so 
	printf("Nhap day so:\n");
	for (int i = 0; i < n; i++){
		// nhap cho tung phan tu arr[i]
		printf("arr[%d]=", i); // arr[1]=
		scanf("%d", &arr[i]);
	}
	
	///////////////////////////////
	// tinh tong cua day so arr
	// n, arr[]
	int sum = 0;
	for (int i = 0; i < n; i++){
		sum += arr[i];
	}
	
	printf("tong la: %d", sum);
}
