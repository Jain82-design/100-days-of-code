#include <stdio.h>

int main(void)
{
    int n, k;
    int arr[1000];
    int i, j, maxValue;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    if (k <= 0 || k > n)
    {
        printf("Invalid window size");
        return 0;
    }

    for (i = 0; i <= n - k; i++)
    {
        maxValue = arr[i];

        for (j = i + 1; j < i + k; j++)
        {
            if (arr[j] > maxValue)
            {
                maxValue = arr[j];
            }
        }

        if (i > 0)
        {
            printf(" ");
        }
        printf("%d", maxValue);
    }

    return 0;
}
