#include<stdio.h>
int main() {
    int a, b, c, d, e, f, g, h;
    printf("Enter the values of a, b, c, d, e, f: ");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    h = a*b/c + d%e -f;
    g = a + b*(c-d)/e;
    printf("%d*%d/%d + %d%%%d - %d = %d\n", a, b, c, d, e, f, h);
    printf("%d + %d*(%d-%d)/%d = %d\n", a, b, c, d, e, g);
    return 0;
}