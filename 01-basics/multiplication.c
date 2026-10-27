#include<stdio.h>
int main() {
    float a,b,c;
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);
    c = a * b;
    printf("Product: %.2f\n", c);
    return 0;
}