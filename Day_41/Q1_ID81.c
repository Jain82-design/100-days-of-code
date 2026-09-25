/* Question ID 81
Count characters in a string without using built-in length functions.
*/

#include <stdio.h>
int main(){
    char s[1000];
    fgets(s,sizeof(s),stdin);
    int n=0;
    while(s[n]&&s[n]!='\n')n++;
    printf("%d",n);
    return 0;
}
