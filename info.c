# include<stdio.h>

int main() {
	char name[30];
	int age;
	
	printf("enter your name: ");
//	scanf("%s", name);
	gets(name);
	printf("enter your age: ");
	scanf("%d", &age);
	
	// you're [name], [age] years old.
	printf("you're %s, %d years old.", name, age);
	
	return 0;
}
