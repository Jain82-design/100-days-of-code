/* Question ID 43
Write a program to check if a number is a strong number.
*/

#include <stdio.h>
int fact(int n){
    int f=1;
    for(int i=2;
    i<=n;
    i++)f*=i;
    return f;
}
int main(){
    int n,x,s=0;
    scanf("%d",&n);
    x=n;
    while(x){
        s+=fact(x%10);
        x/=10;
    }
    printf(s==n?"Strong number":"Not strong number");
    return 0;
}
