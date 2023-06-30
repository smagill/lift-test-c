#include <stdio.h>

int main() {
    int x, y, z;

    printf("Enter an integer: ");
    scanf("%d", &x);

    printf("Enter an integer: ");
    scanf("%d", &y);

    z = x + y;
    z = x * y;

    printf("x * y = %d\n", z);

    return 0;
}