#include<stdio.h>
int main() {
    int num, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    void prime(int num);
    prime(num);
    return 0;
}
void prime(int num) {
    int i, sum = 0;
    printf("The prime factors of %d are: ", num);
    for(i = 2; i <= num; i++) {
        while(num % i == 0) {
            printf("%d ", i);
            sum += i;
            num /= i;
        }
    }
    printf("\nThe sum of the prime factors is: %d\n", sum);
}