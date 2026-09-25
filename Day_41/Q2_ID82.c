/* Question ID 82
Print each character of a string on a new line.
*/

#include <stdio.h>
int main(){
    char s[1000];
    fgets(s,sizeof(s),stdin);
    for(int i=0;
    s[i]&&s[i]!='\n';
    i++)printf("%c\n",s[i]);
    return 0;
}
