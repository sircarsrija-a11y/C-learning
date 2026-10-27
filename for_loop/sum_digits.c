#include<stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n; i != 0; i /= 10) {
        sum += i % 10; // Add the last digit to sum
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}