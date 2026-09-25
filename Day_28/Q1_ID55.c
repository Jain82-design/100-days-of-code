/* Question ID 55
Write a program to print all the prime numbers from 1 to n.
*/

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int x=2;
    x<=n;
    x++){
        int p=1;
        for(int i=2;
        i*i<=x;
        i++)if(x%i==0){
            p=0;
            break;
        }
        if(p)printf("%d%s",x,x==n?"":" ");
    }
    return 0;
}
