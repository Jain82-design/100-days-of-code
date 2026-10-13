/* Day 55 - Question ID 105
Majority element; print -1 if no element appears more than n/2 times */

#include <stdio.h>

int main()
{
    int n, arr[100];
    int i, j, count;
    int majority = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        count = 0;

        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > n / 2)
        {
            majority = arr[i];
            break;
        }
    }

    printf("%d", majority);
    return 0;
}
