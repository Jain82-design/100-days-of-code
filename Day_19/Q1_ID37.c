/* Question ID 37
Write a program to find the LCM of two numbers.
*/

#include <stdio.h>
int main(){
    long long a,b,x,y;
    scanf("%lld%lld",&a,&b);
    x=a<0?-a:a;
    y=b<0?-b:b;
    long long p=x,q=y;
    while(q){
        long long t=p%q;
        p=q;
        q=t;
    }
    printf("%lld",x&&y?(x/p)*y:0);
    return 0;
}
