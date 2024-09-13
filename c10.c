#include <stdio.h>

int main() {
    int num, digit, sum = 0, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;
        sum += digit;
        count++;
        num /= 10;
    }
    printf("Total digits: %d\n", count);
    printf("Sum of digits: %d\n", sum);
    return 0;
}