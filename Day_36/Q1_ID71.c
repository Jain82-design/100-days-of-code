/* Question ID 71
Read and print a matrix.
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
    for(int i=0;
    i<r;
    i++){
        for(int j=0;
        j<c;
        j++)printf("%d%s",a[i][j],j==c-1?"":" ");
        printf("\n");
    }
    return 0;
}
