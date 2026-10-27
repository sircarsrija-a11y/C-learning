#include<stdio.h>
int main() {
    int R;
    printf("Enter the height of the pyramid: ");
    scanf("%d", &R);
    for(int i=1; i<=R; i++){
        for(int j=1; j<=R-i+1; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}