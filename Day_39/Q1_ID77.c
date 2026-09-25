/* Question ID 77
Check if the elements on the diagonal of a matrix are distinct.
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
    j++)if(a[i][i]==a[j][j]){
        printf("Not distinct");
        return 0;
    }
    printf("Distinct");
    return 0;
}
