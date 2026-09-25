/* Question ID 66
Insert an element in a sorted array at the appropriate position.
*/

#include <stdio.h>
int main(){
    int n,a[101],x;
    scanf("%d",&n);
    for(int i=0;
    i<n;
    i++)scanf("%d",&a[i]);
    scanf("%d",&x);
    int pos=0;
    while(pos<n&&a[pos]<x)pos++;
    for(int i=n;
    i>pos;
    i--)a[i]=a[i-1];
    a[pos]=x;
    for(int i=0;
    i<=n;
    i++)printf("%d%s",a[i],i==n?"":" ");
    return 0;
}
