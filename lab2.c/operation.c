#include<stdio.h>
int main() {
    int a, b, c, d, e, f, g, h;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    c = a&b;
    d = a|b;
    e = a^b;
    f = ~a;
    g = ~b;
    h = (a&b)^(~a|b);
    printf("a & b = %d\n", c);
    printf("a | b = %d\n", d);
    printf("a ^ b = %d\n", e);
    printf("~a = %d\n", f);
    printf("~b = %d\n", g);
    printf("(a&b)^(~a|b) = %d\n", h);
    return 0;
}