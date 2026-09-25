/* Question ID 53
Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>
int main(){
    for(int i=1;
    i<=9;
    i++){
        int n=i<=5?2*i-1:2*(10-i)-1;
        for(int j=0;
        j<n;
        j++)printf("*");
        printf("\n");
    }
    return 0;
}
