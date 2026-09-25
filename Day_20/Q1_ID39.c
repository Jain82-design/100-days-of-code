/* Question ID 39
Write a program to find the product of odd digits of a number.
*/

#include <stdio.h>
int main(){
    long long n,p=1;
    int found=0;
    scanf("%lld",&n);
    if(n<0)n=-n;
    while(n){
        int d=n%10;
        if(d%2){
            p*=d;
            found=1;
        }
        n/=10;
    }
    printf("%lld",found?p:0);
    return 0;
}
