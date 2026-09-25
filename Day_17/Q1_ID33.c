/* Question ID 33
Write a program to check if a number is an Armstrong number.
*/

#include <stdio.h>
int main(){
    int n,x,d=0,sum=0;
    scanf("%d",&n);
    x=n;
    while(x){
        d++;
        x/=10;
    }
    x=n;
    while(x){
        int r=x%10,p=1;
        for(int i=0;
        i<d;
        i++)p*=r;
        sum+=p;
        x/=10;
    }
    printf(sum==n?"Armstrong number":"Not Armstrong number");
    return 0;
}
