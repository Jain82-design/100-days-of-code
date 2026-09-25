/* Question ID 84
Convert a lowercase string to uppercase without using built-in functions.
*/

#include <stdio.h>
int main(){
    char s[1000];
    fgets(s,sizeof(s),stdin);
    for(int i=0;
    s[i];
    i++)if(s[i]>='a'&&s[i]<='z')s[i]=s[i]-'a'+'A';
    printf("%s",s);
    return 0;
}
