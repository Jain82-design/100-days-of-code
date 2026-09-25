/* Question ID 67
Insert an element in an array at a given position.
*/

#include <stdio.h>
int main(){
    int n,a[101],x,pos;
    scanf("%d",&n);
    for(int i=0;
    i<n;
    i++)scanf("%d",&a[i]);
    scanf("%d%d",&pos,&x);
    if(pos<0||pos>n){
        printf("Invalid position");
        return 0;
    }
    for(int i=n;
    i>pos;
    i--)a[i]=a[i-1];
    a[pos]=x;
    for(int i=0;
    i<=n;
    i++)printf("%d%s",a[i],i==n?"":" ");
    return 0;
}
