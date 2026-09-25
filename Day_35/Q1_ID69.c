/* Question ID 69
Find the second largest element in an array.
*/

#include <stdio.h>
#include <limits.h>
int main(){
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;
    i<n;
    i++)scanf("%d",&a[i]);
    int mx=INT_MIN,second=INT_MIN;
    for(int i=0;
    i<n;
    i++){
        if(a[i]>mx){
            second=mx;
            mx=a[i];
        }
        else if(a[i]>second&&a[i]!=mx)second=a[i];
    }
    if(second==INT_MIN)printf("No second largest");
    else printf("%d",second);
    return 0;
}
