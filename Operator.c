#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);

    printf("%d\n", a == b);
    printf("%d\n", a != b);
    printf("%d\n", a > b);
    printf("%d\n", a < b);
    printf("%d\n", a >= b);
    printf("%d\n", a <= b);

    int x, y;
    printf("Enter two logical values (0 or 1): ");
    scanf("%d %d", &x, &y);

    printf("%d\n", x && y);
    printf("%d\n", x || y);
    printf("%d\n", !x);

    return 0;
}
