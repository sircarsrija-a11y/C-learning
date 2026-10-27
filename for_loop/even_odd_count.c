#include<stdio.h>
int main() {
    int i, n, digit, oddcount=0, evencount=0;
    printf("Enter a number n: ");
    scanf("%d", &n);
    for(i=n; i!=0; i/=10) {
        digit = i % 10;
        if(digit % 2 == 0) {
            evencount++;
        } else {
            oddcount++;
        }
    }
    printf("Even digits: %d\n", evencount);
    printf("Odd digits: %d\n", oddcount);
    return 0;
}