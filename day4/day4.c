// Q7)  Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    

//Q8) Write a program to find and display the sum of the first n natural numbers

 int A;
 printf("Enter a Natural number : ");
 scanf("%d",&A);

 printf("Sum is : %d", A*(A+1)/2);

 return 0;

}