#include<stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    void convertToRoman(int num);
    convertToRoman(num);
    return 0;
}
void convertToRoman(int num) {
    int values[] = {1000, 500, 100, 50, 10, 5, 1};
    char *symbols[] = {"M", "D", "C", "L", "X", "V", "I"};
    int i = 0;
    while (num > 0) {
        while (num >= values[i]) {
            printf("%s", symbols[i]);
            num -= values[i];
        }
        i++;
    }
    printf("\n");
}
