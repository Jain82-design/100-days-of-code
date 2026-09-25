/* Question ID 87
Count spaces, digits, and special characters in a string.
*/

#include <stdio.h>
#include <ctype.h>
int main(){
    char s[1000];
    fgets(s,sizeof(s),stdin);
    int sp=0,d=0,sc=0;
    for(int i=0;
    s[i]&&s[i]!='\n';
    i++){
        unsigned char c=s[i];
        if(c==' ')sp++;
        else if(isdigit(c))d++;
        else if(!isalnum(c))sc++;
    }
    printf("Spaces: %d\nDigits: %d\nSpecial characters: %d",sp,d,sc);
    return 0;
}
