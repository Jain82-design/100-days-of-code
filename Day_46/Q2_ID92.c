/* Question ID 92
Find the first repeating lowercase alphabet in a string.
*/

#include <stdio.h>
int main(){
    char s[1000];
    int seen[26]={
        0}
        ;
        fgets(s,sizeof(s),stdin);
        for(int i=0;
        s[i]&&s[i]!='\n';
        i++){
            if(s[i]>='a'&&s[i]<='z'){
                int k=s[i]-'a';
                if(seen[k]){
                    printf("%c",s[i]);
                    return 0;
                }
                seen[k]=1;
            }
        }
        printf("No repeating lowercase alphabet");
        return 0;
    }
