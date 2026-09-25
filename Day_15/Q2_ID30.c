/* Question ID 30
Write a program to reverse a given number.
*/

#include <stdio.h>
int main(){
    long long n,r=0;
    scanf("%lld",&n);
    long long x=n<0?-n:n;
    while(x){
        r=r*10+x%10;
        x/=10;
    }
    printf("%lld",n<0?-r:r);
    return 0;
}
