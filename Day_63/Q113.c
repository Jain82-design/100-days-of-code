#include <stdio.h>

int main(void)
{
    int n, k;
    int arr[1000];
    int i, j, temp;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    if (k < 1 || k > n)
    {
        printf("Invalid k");
        return 0;
    }

    /* Sort the array in ascending order. */
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("%d", arr[k - 1]);
    return 0;
}
