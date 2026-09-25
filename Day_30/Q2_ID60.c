/* Question ID 60
Count positive, negative, and zero elements in an array.
*/

#include <stdio.h>
int main(){
    int n,a[100],p=0,ne=0,z=0;
    scanf("%d",&n);
    for(int i=0;
    i<n;
    i++){
        scanf("%d",&a[i]);
        if(a[i]>0)p++;
        else if(a[i]<0)ne++;
        else z++;
    }
    printf("Positive: %d\nNegative: %d\nZero: %d",p,ne,z);
    return 0;
}
