/* Question ID 94
Find the longest word in a sentence.
*/

#include <stdio.h>
#include <string.h>
int main(){
    char s[2000];
    fgets(s,sizeof(s),stdin);
    char best[1000]="",word[1000];
    int bi=0,wi=0;
    for(int i=0;
    ;
    i++){
        char c=s[i];
        if(c!=' '&&c!='\n'&&c!='\0'){
            word[wi++]=c;
        }
        else{
            word[wi]='\0';
            if(wi>bi){
                strcpy(best,word);
                bi=wi;
            }
            wi=0;
            if(c=='\0'||c=='\n')break;
        }
    }
    printf("%s",best);
    return 0;
}
