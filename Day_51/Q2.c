/* Day 51 - Question 2
Question ID: 102
Find the index of the first element greater than or equal to x in a sorted array.
*/

#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int x;
    int i;
    int answer = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            answer = i;
            break;
        }
    }

    printf("%d", answer);

    return 0;
}
