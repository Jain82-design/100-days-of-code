/* Day 57 - Question ID 107
Previous greater element to the left for each element, using nested loops (no stack) */

#include <stdio.h>

int main()
{
    int n, arr[100];
    int i, j, answer;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        answer = -1;

        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                answer = arr[j];
                break;
            }
        }

        if (i > 0)
        {
            printf(", ");
        }

        printf("%d", answer);
    }

    return 0;
}
