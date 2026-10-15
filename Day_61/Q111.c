#include <stdio.h>

int main(void)
{
    int n, k;
    int arr[1000];
    int i, j;
    int firstNegative, found;

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
        firstNegative = 0;
        found = 0;

        for (j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                firstNegative = arr[j];
                found = 1;
                break;
            }
        }

        if (i > 0)
        {
            printf(" ");
        }

        if (found)
        {
            printf("%d", firstNegative);
        }
        else
        {
            printf("0");
        }
    }

    return 0;
}
