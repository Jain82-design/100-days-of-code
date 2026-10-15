#include <stdio.h>

int main(void)
{
    int n, k;
    int arr[1000];
    int i;
    int currentSum = 0;
    int maxSum;

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

    for (i = 0; i < k; i++)
    {
        currentSum += arr[i];
    }
    maxSum = currentSum;

    for (i = k; i < n; i++)
    {
        currentSum = currentSum - arr[i - k] + arr[i];
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }

    printf("%d", maxSum);
    return 0;
}
