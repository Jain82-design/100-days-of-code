/* Question ID 86
Check if a string is a palindrome.
*/

#include <stdio.h>
#include <string.h>
int main(){
    char s[1000];
    fgets(s,sizeof(s),stdin);
    int n=strlen(s);
    if(n&&s[n-1]=='\n')s[--n]=0;
    int ok=1;
    for(int i=0,j=n-1;
    i<j;
    i++,j--)if(s[i]!=s[j]){
        ok=0;
        break;
    }
    printf(ok?"Palindrome":"Not palindrome");
    return 0;
}
