#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a))
        printf("It is a right-angled triangle.\n");
    else
        printf("It is not a right-angled triangle.\n");
    return 0;
}