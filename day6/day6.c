#include<stdio.h>
int main() {

// Q11) Write a program to input an integer and check whether it is even or odd using if–else.

 int number;
 printf("Enter number : ");
 scanf("%d",&number);

if (number % 2 == 0) {
        printf("The number is even.\n");
       } else {
        printf("The number is odd.\n");
      }

      // Q12) Write a program to input an integer and check whether it is positive, negative or zero using nested if–else

int number;
    printf("enter a number: ");
    scanf("%d",&number);

    if(number >= 0) {
     printf("The number is positive.\n");
      if (number % 2 == 0) {
        printf("The number is even.\n");
       } else {
        printf("The number is odd.\n");
      }
    } else {
        printf("The number is negative.\n");
     }
      
    return 0;
}