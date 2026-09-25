/* Question ID 74
Find the transpose of a matrix.
*/

#include <stdio.h>
int main(){
    int r,c,a[50][50];
    scanf("%d%d",&r,&c);
    for(int i=0;
    i<r;
    i++)for(int j=0;
    j<c;
    j++)scanf("%d",&a[i][j]);
    for(int j=0;
    j<c;
    j++){
        for(int i=0;
        i<r;
        i++)printf("%d%s",a[i][j],i==r-1?"":" ");
        printf("\n");
    }
    return 0;
}
