# include <stdio.h>
# include <string.h>

int main() {
	char str1[] = "hello";
	char str2[] = "worldaaaaaaaaa";
	
//	printf("%s", str1);
	strupr(str1); // chuyen het sang in hoa
	printf("%s", str1);
	// strlwr(asldf) // chuyen het sang in thuong.
	 strcat(str1, str2); // noi xau: str1 = str1 + str2
	 printf("%s", str1); 
	 strcpy(str1, str2); // copy xau: str1 = str2
//	nhap vao ho ten --> sinh ra email tu cai ho ten day.

}
