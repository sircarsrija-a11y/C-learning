#include<stdio.h>
int main() {
    int n, original, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        digit = n % 10;
        sum += digit * digit * digit; // Add the cube of the last digit to sum
        n /= 10; // Remove the last digit from n
    }
    if (original == sum)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
    return 0;
}