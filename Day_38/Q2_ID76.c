/* Question ID 76
Check if a matrix is symmetric.
*/

#include <stdio.h>
int main(){
    int n,a[50][50];
    scanf("%d",&n);
    for(int i=0;
    i<n;
    i++)for(int j=0;
    j<n;
    j++)scanf("%d",&a[i][j]);
    for(int i=0;
    i<n;
    i++)for(int j=i+1;
    j<n;
    j++)if(a[i][j]!=a[j][i]){
        printf("Not symmetric");
        return 0;
    }
    printf("Symmetric");
    return 0;
}
