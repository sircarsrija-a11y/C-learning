#include<stdio.h>
int main() {
    int x, y, z;
    printf("Enter a number: ");
    scanf("%d", &x);
    // Logical NOT gives the boolean inverse; that is, it converts a non-zero value to 0 and zero to 1.
    y = !x;
    // Bitwise NOT gives the bitwise inverse; that is, for each bit, 0 becomes 1 and 1 becomes 0.
    // For a signed integer, the result is the two's complement of the original number.
    z = ~x;
    printf("!%d = %d\n", x, y);
    printf("~%d = %d\n", x, z);
    return 0;
}