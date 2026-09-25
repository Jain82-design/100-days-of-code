/* Question ID 54
Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

*/

#include <stdio.h>
int main(){
    for(int i=1;
    i<=7;
    i++){
        int level=i<=4?i:8-i;
        for(int s=0;
        s<4-level;
        s++)printf(" ");
        for(int j=0;
        j<2*level-1;
        j++)printf("*");
        printf("\n");
    }
    return 0;
}
