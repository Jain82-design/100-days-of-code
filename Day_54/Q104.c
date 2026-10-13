/* Day 54 - Question ID 104
Pivot integer x from 1 to n */

#include <stdio.h>

int main()
{
    int n, x, i;
    int leftSum, rightSum;
    int answer = -1;

    scanf("%d", &n);

    for (x = 1; x <= n; x++)
    {
        leftSum = 0;
        rightSum = 0;

        for (i = 1; i <= x; i++)
        {
            leftSum = leftSum + i;
        }

        for (i = x; i <= n; i++)
        {
            rightSum = rightSum + i;
        }

        if (leftSum == rightSum)
        {
            answer = x;
            break;
        }
    }

    printf("%d", answer);
    return 0;
}
