/* Question ID 73
Find the sum of each row of a matrix and store it in an array.
*/

#include <stdio.h>
int main(){
    int r,c,a[50][50],sum[50]={
        0}
        ;
        scanf("%d%d",&r,&c);
        for(int i=0;
        i<r;
        i++)for(int j=0;
        j<c;
        j++){
            scanf("%d",&a[i][j]);
            sum[i]+=a[i][j];
        }
        for(int i=0;
        i<r;
        i++)printf("%d%s",sum[i],i==r-1?"":" ");
        return 0;
    }
