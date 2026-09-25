/* Question ID 40
Write a program to find the 1’s complement of a binary number and print it.
*/

#include <stdio.h>
#include <string.h>
int main(){
    char s[1000];
    scanf("%999s",s);
    for(int i=0;
    s[i];
    i++)s[i]=(s[i]=='0')?'1':(s[i]=='1'?'0':s[i]);
    printf("%s",s);
    return 0;
}
