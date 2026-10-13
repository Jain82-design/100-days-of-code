/* Day 51 - Question 1
Question ID: 101
Print the first and last occurrence of a target in a sorted array.
*/

#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int target;
    int i;
    int first = -1;
    int last = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            if (first == -1)
            {
                first = i;
            }

            last = i;
        }
    }

    printf("%d,%d", first, last);

    return 0;
}
