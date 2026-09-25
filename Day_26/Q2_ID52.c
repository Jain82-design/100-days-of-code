/* Question ID 52
Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*


*/

#include <stdio.h>
int main(){
    int rows[]={
        1,3,5,3,1}
        ;
        for(int i=0;
        i<5;
        i++){
            for(int j=0;
            j<rows[i];
            j++)printf("*");
            printf("\n\n");
        }
        return 0;
    }
