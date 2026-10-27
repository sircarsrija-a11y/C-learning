#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    while (i <= n)
    {
        if (i % 2 != 0)
            sum += i;

        i++;
    }

    printf("Sum of odd numbers = %d", sum);

    return 0;
}