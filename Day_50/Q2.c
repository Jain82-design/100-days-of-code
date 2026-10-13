/* Day 50 - Question 2
Question ID: 100
Print all sub-strings of a string.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i;
    int j;
    int k;

    scanf("%s", str);

    for (i = 0; i < strlen(str); i++)
    {
        for (j = i; j < strlen(str); j++)
        {
            for (k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            printf(" ");
        }
    }

    return 0;
}
