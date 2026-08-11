#include<stdio.h>
// Q1) Write a program to input two numbers and display their sum
int main() {

 int a,b;
 printf("Enter a : ");
 scanf("%d",&a);

 printf("Enter b : ");
 scanf("%d",&b);

 printf("Sum is : %d", a + b );

// Q2) Write a program to input two numbers and display their sum, difference, product, and quotient.

 int A,B;
 printf("\nEnter A : ");
 scanf("%d",&A);

 printf("Enter B : ");
 scanf("%d",&B);

 printf("Sum is : %d", A + B);
 printf("\nDiffrence is : %d", A - B);
 printf("\nProduct is : %d", A * B);

 if (B == 0) { printf("\nQuotient is undefined"); 
 } else { printf("\nQuotient = %d", A / B); }
    return 0;
}