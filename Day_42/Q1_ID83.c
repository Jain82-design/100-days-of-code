/* Question ID 83
Count vowels and consonants in a string.
*/

#include <stdio.h>
#include <ctype.h>
int main(){
    char s[1000];
    fgets(s,sizeof(s),stdin);
    int v=0,c=0;
    for(int i=0;
    s[i];
    i++)if(isalpha((unsigned char)s[i])){
        char x=tolower((unsigned char)s[i]);
        if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')v++;
        else c++;
    }
    printf("Vowels: %d\nConsonants: %d",v,c);
    return 0;
}
