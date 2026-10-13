/* Day 48 - Question 1
Question ID: 95
Check if one string is a rotation of another.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    char combined[200];

    scanf("%s", str1);
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2))
    {
        printf("Not rotation");
        return 0;
    }

    strcpy(combined, str1);
    strcat(combined, str1);

    if (strstr(combined, str2) != NULL)
    {
        printf("Rotation");
    }
    else
    {
        printf("Not rotation");
    }

    return 0;
}
