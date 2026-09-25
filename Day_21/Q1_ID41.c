/* Question ID 41
Write a program to swap the first and last digit of a number.
*/

#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    scanf("%99s",s);
    int n=strlen(s);
    if(n>1){
        char t=s[0];
        s[0]=s[n-1];
        s[n-1]=t;
    }
    printf("%s",s);
    return 0;
}
