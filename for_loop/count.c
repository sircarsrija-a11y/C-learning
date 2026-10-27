#include<stdio.h>
int main() {
    int count,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(count=0; n!=0; n/=10) {
        count++;
    }
    printf("Number of digits: %d\n", count);
    return 0;
}