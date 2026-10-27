#include<stdio.h>
int main() {
    float a, b;
    char op;
    printf("Enter an expression (e.g., 5 + 3): ");
    scanf("%f %c %f", &a, &op, &b);
    if (op == "+") {
        printf("%.2f + %.2f = %.2f\n", a, b, a + b);
    } 
    else if (op == "-") {
        printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    } 
    else if (op == "*") {
        printf("%.2f * %.2f = %.2f\n", a, b, a * b);
    } 
    else if (op == "/") {
        if (b != 0) {
            printf("%.2f / %.2f = %.2f\n", a, b, a / b);
        } 
        else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } 
    else {
        printf("Error: Invalid operator. Please use +, -, *, or /.\n");
    }
    return 0;
}