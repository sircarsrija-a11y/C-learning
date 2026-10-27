#include<stdio.h>
int main() {
    int class, fails, grace;
    printf("Enter class (in digits): ");
    scanf("%d", &class);
    printf("Enter number of fails: ");
    scanf("%d", &fails);
    switch(class) {
        case 1:
            if (fails <= 3) {
                grace = 5;
            }
            break;
        case 2:
            if (fails <= 2) {
                grace = 4;
            }
            break;
        case 3:
            if (fails <= 1) {
                grace = 5;
            }
            break;
        default:
            grace = 0;
            break;
    }
    printf("Grace marks per failed subject: %d\n", grace);
    return 0;
}