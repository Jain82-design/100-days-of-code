/* Day 56 - Question ID 106
Next greater element to the right for each element, using nested loops (no stack) */

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

        for (j = i + 1; j < n; j++)
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
