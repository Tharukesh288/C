#include <stdio.h>

int main() {
    int age = 19;
    float height = 5.8;
    char session = 'A';
    double salary = 6300.75;

    printf(" %d\n", age);
    printf(" %.1f\n", height);
    printf(" %c\n", session);
    printf(" %.2lf\n", salary);

    return 0;
}