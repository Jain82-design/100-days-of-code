/* Day 48 - Question 2
Question ID: 96
Reverse each word in a sentence without changing the word order.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200];
    int i;
    int start = 0;
    int end;

    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; ; i++)
    {
        if (sentence[i] == ' ' || sentence[i] == '\n' || sentence[i] == '\0')
        {
            end = i - 1;

            while (start < end)
            {
                char temp = sentence[start];
                sentence[start] = sentence[end];
                sentence[end] = temp;

                start++;
                end--;
            }

            if (sentence[i] == '\0' || sentence[i] == '\n')
            {
                break;
            }

            start = i + 1;
        }
    }

    printf("%s", sentence);

    return 0;
}
