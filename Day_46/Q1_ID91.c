/* Question ID 91
Remove all vowels from a string.
*/

#include <stdio.h>
int main(){
    char s[1000];
    fgets(s,sizeof(s),stdin);
    int j=0;
    for(int i=0;
    s[i];
    i++){
        char c=s[i];
        if(!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'))s[j++]=c;
    }
    s[j]=0;
    printf("%s",s);
    return 0;
}
