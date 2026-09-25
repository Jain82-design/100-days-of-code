/* Question ID 79
Perform diagonal traversal of a matrix.
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
    for(int d=0;
    d<r+c-1;
    d++){
        int i=d<c?0:d-c+1;
        int j=d<c?d:c-1;
        while(i<r&&j>=0){
            printf("%d ",a[i][j]);
            i++;
            j--;
        }
    }
    return 0;
}
