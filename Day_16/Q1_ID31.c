/* Question ID 31
Write a program to take a number as input and print its equivalent binary representation.
*/

#include <stdio.h>
int main(){
    unsigned int n;
    int a[64],i=0;
    scanf("%u",&n);
    if(n==0){
        printf("0");
        return 0;
    }
    while(n){
        a[i++]=n%2;
        n/=2;
    }
    while(i--)printf("%d",a[i]);
    return 0;
}
