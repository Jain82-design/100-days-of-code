/* Question ID 90
Toggle case of each character in a string.
*/

#include <stdio.h>
int main(){
    char s[1000];
    fgets(s,sizeof(s),stdin);
    for(int i=0;
    s[i];
    i++){
        if(s[i]>='a'&&s[i]<='z')s[i]=s[i]-'a'+'A';
        else if(s[i]>='A'&&s[i]<='Z')s[i]=s[i]-'A'+'a';
    }
    printf("%s",s);
    return 0;
}
