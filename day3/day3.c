#include<stdio.h>
int main() {

// Q5) Write a program to convert temperature from Celsius to Fahrenheit.

float celsius , fahrenheit;
printf("Enter Temperature celsius : ");
scanf("%f", &celsius);

printf("Fahrenheit : %f \n", (celsius * 1.8) + 32);

// Q6) Write a program to swap two numbers using a third variable.

int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

 return 0;
}