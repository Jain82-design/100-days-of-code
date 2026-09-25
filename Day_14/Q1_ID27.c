/* Question ID 27
Write a program to print the sum of the first n odd numbers.
*/

#include <stdio.h>
int main(){
    int n;
    long long s=0;
    scanf("%d",&n);
    for(int i=1;
    i<=n;
    i++)s+=2*i-1;
    printf("%lld",s);
    return 0;
}
