#include<stdio.h>
int main() {
    float a,b,c;
    printf("Enter dividend and divisor: ");
    scanf("%f %f",&a,&b);
    c = a / b;
    printf("Quotient: %.2f\n", c);
    return 0;
}