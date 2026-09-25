/* Question ID 36
Write a program to find the HCF (GCD) of two numbers.
*/

#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    a=a<0?-a:a;
    b=b<0?-b:b;
    while(b){
        int t=a%b;
        a=b;
        b=t;
    }
    printf("%d",a);
    return 0;
}
