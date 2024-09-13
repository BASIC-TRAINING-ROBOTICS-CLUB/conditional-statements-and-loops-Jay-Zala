#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0)
        printf("This is a Positive num\n");
    else if (num < 0)
        printf("This is a Negative num\n");
    else
        printf("This is a Zero\n");
    return 0;
}