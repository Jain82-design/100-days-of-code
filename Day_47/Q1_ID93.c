/* Question ID 93
Check if two strings are anagrams of each other.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[1000],b[1000];
    int f[256]={
        0}
        ;
        fgets(a,sizeof(a),stdin);
        fgets(b,sizeof(b),stdin);
        for(int i=0;
        a[i];
        i++)if(!isspace((unsigned char)a[i]))f[(unsigned char)tolower((unsigned char)a[i])]++;
        for(int i=0;
        b[i];
        i++)if(!isspace((unsigned char)b[i]))f[(unsigned char)tolower((unsigned char)b[i])]--;
        for(int i=0;
        i<256;
        i++)if(f[i]){
            printf("Not anagram");
            return 0;
        }
        printf("Anagram");
        return 0;
    }
