#include<stdio.h>
int main() {
    int a, b, c, d;
    printf("Enter a 3 digit number: ");
    scanf("%d", &a);
    if (a>100 && a< 1000) {
        b = a/100;
        c = (a/10)%10;
        d = a%10;
        printf("Hundreds digit: %d\n", b);
        printf("Tens digit: %d\n", c);
        printf("Units digit: %d\n", d);
    } 
    else {
        printf("Error: Please enter a valid 3 digit number.\n");
    }
    return 0;
}