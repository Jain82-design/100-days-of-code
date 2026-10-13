/* Day 49 - Question 1
Question ID: 97
Print the initials of a name.
*/

#include <stdio.h>

int main()
{
    char name[200];
    int i;

    fgets(name, sizeof(name), stdin);

    printf("%c", name[0]);

    for (i = 1; name[i] != '\0'; i++)
    {
        if (name[i - 1] == ' ' && name[i] != ' ' && name[i] != '\n')
        {
            printf(".%c", name[i]);
        }
    }

    printf(".");

    return 0;
}
