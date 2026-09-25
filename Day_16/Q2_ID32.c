/* Question ID 32
Write a program to check if a number is a palindrome.
*/

#include <stdio.h>
int main(){
    int n,orig,r=0;
    scanf("%d",&n);
    orig=n;
    while(n){
        r=r*10+n%10;
        n/=10;
    }
    printf(orig==r?"Palindrome":"Not palindrome");
    return 0;
}
