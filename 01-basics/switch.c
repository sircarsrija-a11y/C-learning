#include<stdio.h>
int main() {
    int i,j;
    printf("Enter a number");
    scanf("%d",&i);
    switch(i){
        printf("Hello");
        case 1:
            j=10;
            break;
        case 2:
            j=20;
            printf("%d",j);
            break;
        default:
            printf("Invalid number");
    }
    return 0;
}