/* Question ID 85
Reverse a string.
*/

#include <stdio.h>
#include <string.h>
int main(){
    char s[1000];
    fgets(s,sizeof(s),stdin);
    int n=strlen(s);
    if(n&&s[n-1]=='\n')s[--n]='\0';
    for(int i=0,j=n-1;
    i<j;
    i++,j--){
        char t=s[i];
        s[i]=s[j];
        s[j]=t;
    }
    printf("%s",s);
    return 0;
}
