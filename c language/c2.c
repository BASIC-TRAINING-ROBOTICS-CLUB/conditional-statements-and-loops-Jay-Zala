#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
        printf("It is an equilateral triangle.\n");
    else
        printf("It is not an equilateral triangle.\n");
    return 0;
}