#include <stdio.h>

int main()
{
    int n;
    int positiveSum = 0, negativeSum = 0;
    int positiveCount = 0, negativeCount = 0;

    printf("Enter integers (0 to stop):\n");
    scanf("%d", &n);

    while (n != 0)
    {
        if (n > 0)
        {
            positiveSum += n;
            positiveCount++;
        }
        else
        {
            negativeSum += n;
            negativeCount++;
        }

        scanf("%d", &n);
    }

    printf("Sum of positive numbers = %d\n", positiveSum);
    printf("Sum of negative numbers = %d\n", negativeSum);
    printf("Number of positive numbers = %d\n", positiveCount);
    printf("Number of negative numbers = %d\n", negativeCount);

    return 0;
}