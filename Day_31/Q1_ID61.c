/* Question ID 61
Search for an element in an array using linear search.
*/

#include <stdio.h>
int main(){
    int n,a[100],x,pos=-1;
    scanf("%d",&n);
    for(int i=0;
    i<n;
    i++)scanf("%d",&a[i]);
    scanf("%d",&x);
    for(int i=0;
    i<n;
    i++)if(a[i]==x){
        pos=i;
        break;
    }
    if(pos>=0)printf("Found at index %d",pos);
    else printf("Not found");
    return 0;
}
