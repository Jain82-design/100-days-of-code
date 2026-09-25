/* Question ID 34
Write a program to check if a number is prime.
*/

#include <stdio.h>
int main(){
    int n,prime=1;
    scanf("%d",&n);
    if(n<2)prime=0;
    for(int i=2;
    i*i<=n;
    i++)if(n%i==0){
        prime=0;
        break;
    }
    printf(prime?"Prime":"Not prime");
    return 0;
}
