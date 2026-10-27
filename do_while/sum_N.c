#include<stdio.h>
int main() {
    int N, i = 1, sum=0;
    printf("Enter a number: ");
    scanf("%d", &N);
    do {
        sum += i;
        i++;
    } while(i<=N);
    printf("Sum of first %d natural numbers is: %d\n", N, sum);
    return 0;
}