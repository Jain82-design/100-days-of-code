/* Day 53 - Question ID 103
Leftmost pivot index of an integer array */

#include <stdio.h>

int main()
{
    int n, arr[100];
    int i, j, leftSum, rightSum;
    int answer = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        leftSum = 0;
        rightSum = 0;

        for (j = 0; j < i; j++)
        {
            leftSum = leftSum + arr[j];
        }

        for (j = i + 1; j < n; j++)
        {
            rightSum = rightSum + arr[j];
        }

        if (leftSum == rightSum)
        {
            answer = i;
            break;
        }
    }

    printf("%d", answer);
    return 0;
}
