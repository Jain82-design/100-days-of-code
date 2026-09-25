/* Question ID 25
Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
*/

#include <stdio.h>
int main(){
    double a,b;
    char op;
    scanf("%lf %c %lf",&a,&op,&b);
    switch(op){
        case '+':printf("%g",a+b);
        break;
        case '-':printf("%g",a-b);
        break;
        case '*':printf("%g",a*b);
        break;
        case '/':if(b!=0)printf("%g",a/b);
        else printf("Division by zero");
        break;
        case '%':printf("%d",(int)a%(int)b);
        break;
        default:printf("Invalid operator");
    }
    return 0;
}
