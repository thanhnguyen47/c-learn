#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    
    // Input first number
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    // Input second number
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Input operator
    printf("Enter operator (+, -, *, /, %%): ");
    scanf("%c", &operator);  // Notice the space before %c to consume any whitespace
    
    // Perform the operation based on the operator using if-else statements
    if (operator == '+') {
        printf("Result: %d\n", num1 + num2);
    } else if (operator == '-') {
        printf("Result: %d\n", num1 - num2);
    } else if (operator == '*') {
        printf("Result: %d\n", num1 * num2);
    } else if (operator == '/') {
        if (num2 != 0)
            printf("Result: %d\n", num1 / num2);
        else
            printf("Error: Division by zero!\n");
    } else if (operator == '%') {
        if (num2 != 0)
            printf("Result: %d\n", num1 % num2);
        else
            printf("Error: Division by zero!\n");
    } else {
        printf("Invalid operator!\n");
    }

    return 0;
}

