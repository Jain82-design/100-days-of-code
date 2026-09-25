/* Question ID 72
Find the sum of all elements in a matrix.
*/

#include <stdio.h>
int main(){
    int r,c,a[50][50];
    long long s=0;
    scanf("%d%d",&r,&c);
    for(int i=0;
    i<r;
    i++)for(int j=0;
    j<c;
    j++){
        scanf("%d",&a[i][j]);
        s+=a[i][j];
    }
    printf("%lld",s);
    return 0;
}
