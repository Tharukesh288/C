#include <stdio.h>

// Function declaration
int add(int a, int b);

int main() {
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = add(num1, num2);

    printf("Sum = %d\n", result);
    return 0;
}

int add(int a, int b) {
    return a + b;
}
