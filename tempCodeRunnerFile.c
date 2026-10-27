#include<stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a%5 == 0) {
        if (a%7==0) {
            printf("%d is divisible by both 5 and 7\n", a);
        } 
        else {
            printf("%d is divisible by 5 but not by 7\n", a);
        }
    } 
    else if (a%7 == 0) {
        printf("%d is divisible by 7 but not by 5\n", a);
    }
    else {
        printf("%d is not divisible by either 5 or 7\n", a);
    }
    return 0;
}