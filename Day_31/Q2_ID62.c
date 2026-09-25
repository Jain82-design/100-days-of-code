/* Question ID 62
Reverse an array without taking extra space.
*/

#include <stdio.h>
int main(){
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;
    i<n;
    i++)scanf("%d",&a[i]);
    for(int i=0,j=n-1;
    i<j;
    i++,j--){
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    for(int i=0;
    i<n;
    i++)printf("%d%s",a[i],i==n-1?"":" ");
    return 0;
}
