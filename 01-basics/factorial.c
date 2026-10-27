#include <stdio.h>

int main()
{
    int n, result = 1;
    printf("N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    printf("%d! = %d", n, result);
    return 0;
}