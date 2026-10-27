#include<stdio.h>
int main() {
    int n=0;
    while(n != 5) {
    printf("Choose an operation:\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Exit\n");
    scanf("%d", &n);
    switch(n) {
        case 1: {
            int a, b;
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Result: %d\n", a + b);
            break;
        }
        case 2: {
            int a, b;
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Result: %d\n", a - b);
            break;
        }
        case 3: {
            int a, b;
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Result: %d\n", a * b);
            break;
        }
        case 4: {
            int a, b;
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            if(b != 0) {
                printf("Result: %.2f\n", (float)a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        }
        case 5:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }
}
    return 0;
}