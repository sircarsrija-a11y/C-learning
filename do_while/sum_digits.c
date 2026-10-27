#include<stdio.h>
int main() {
    int n, sum=0, i = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    do {
        sum+=n%10;
        n/=10;
        i++;
    } while(n!=0);
    printf("Sum of digits: %d\n", sum);
    return 0;
}