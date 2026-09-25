/* Question ID 70
Rotate an array to the right by k positions.
*/

#include <stdio.h>
int main(){
    int n,a[100],k;
    scanf("%d",&n);
    for(int i=0;
    i<n;
    i++)scanf("%d",&a[i]);
    scanf("%d",&k);
    k%=n;
    for(int t=0;
    t<k;
    t++){
        int last=a[n-1];
        for(int i=n-1;
        i>0;
        i--)a[i]=a[i-1];
        a[0]=last;
    }
    for(int i=0;
    i<n;
    i++)printf("%d%s",a[i],i==n-1?"":" ");
    return 0;
}
