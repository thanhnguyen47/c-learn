# include <stdio.h>
# include <stdbool.h>

int main() {
	// logical operators:
	// and:  &&
	// or : ||
	// not: !
	 // true : != 0
	 // flase: == 0
	bool flag = true;
	bool flag2 = false;
	// flag && flag2 = false
	// flag || flag2 = true
	if (!flag) { // --> ! true = false
		printf("how's it going?");
	} else {
		printf("laskdfj");
	}
	
	return 0;
}
