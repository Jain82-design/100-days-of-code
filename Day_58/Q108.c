/* Day 58 - Question ID 108
Product of all array elements except the element at the same index */

#include <stdio.h>

int main()
{
    int n, nums[100], answer[100];
    int i, j, product;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++)
    {
        product = 1;

        for (j = 0; j < n; j++)
        {
            if (j != i)
            {
                product = product * nums[j];
            }
        }

        answer[i] = product;
    }

    printf("[");

    for (i = 0; i < n; i++)
    {
        if (i > 0)
        {
            printf(",");
        }

        printf("%d", answer[i]);
    }

    printf("]");
    return 0;
}
