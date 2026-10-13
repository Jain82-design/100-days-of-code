/* Day 49 - Question 2
Question ID: 98
Print initials of a name with the surname displayed in full.
*/

#include <stdio.h>

int main()
{
    char name[200];
    int i;
    int lastSpace = -1;

    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            lastSpace = i;
        }
    }

    printf("%c.", name[0]);

    for (i = 1; i < lastSpace; i++)
    {
        if (name[i - 1] == ' ')
        {
            printf("%c.", name[i]);
        }
    }

    printf(" %s", &name[lastSpace + 1]);

    return 0;
}
