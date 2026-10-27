#include<stdio.h>
int main() {
    int n, digit, reverse = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (; n != 0; n /= 10) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
    }

    printf("Reverse = %d", reverse);
    return 0;
}