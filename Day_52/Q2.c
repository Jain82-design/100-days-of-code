/* Day 52 - Question 2
Question ID: 104
Find the pivot integer x from 1 to n.
*/

#include <stdio.h>

int main()
{
    int n;
    int x;
    int leftSum;
    int rightSum;
    int answer = -1;
    int i;

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
