#include<stdio.h>
int main() {
    int n,i,term1,term2,next;
    printf("Enter a number n: ");
    scanf("%d",&n);
    for(i=1, term1=0, term2=1; i<=n; i++) {
        printf("%d", term1);
        int next = term1 + term2;
        term1 = term2;
        term2 = next;
    }
    printf("\n");
    return 0;
}