/* Question ID 59
Count even and odd numbers in an array.
*/

#include <stdio.h>
int main(){
    int n,a[100],e=0,o=0;
    scanf("%d",&n);
    for(int i=0;
    i<n;
    i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0)e++;
        else o++;
    }
    printf("Even: %d\nOdd: %d",e,o);
    return 0;
}
