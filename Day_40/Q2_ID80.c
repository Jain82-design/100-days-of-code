/* Question ID 80
Multiply two matrices.
*/

#include <stdio.h>
int main(){
    int r1,c1,r2,c2,a[30][30],b[30][30],p[30][30]={
        0}
        ;
        scanf("%d%d",&r1,&c1);
        for(int i=0;
        i<r1;
        i++)for(int j=0;
        j<c1;
        j++)scanf("%d",&a[i][j]);
        scanf("%d%d",&r2,&c2);
        for(int i=0;
        i<r2;
        i++)for(int j=0;
        j<c2;
        j++)scanf("%d",&b[i][j]);
        if(c1!=r2){
            printf("Invalid");
            return 0;
        }
        for(int i=0;
        i<r1;
        i++)for(int j=0;
        j<c2;
        j++)for(int k=0;
        k<c1;
        k++)p[i][j]+=a[i][k]*b[k][j];
        for(int i=0;
        i<r1;
        i++){
            for(int j=0;
            j<c2;
            j++)printf("%d%s",p[i][j],j==c2-1?"":" ");
            printf("\n");
        }
        return 0;
    }
