#include<stdio.h>
int main() {

// Q3) Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

int a,b;
printf("Enter a : ");
scanf("%d", &a);

printf("Enter b : ");
scanf("%d", &b);

printf("Area of Rectangle is : %d \n", a*b);
printf("Perimeter of Rectangle is : %d \n", 2*(a+b));

// Q4) Write a program to calculate the area and circumference of a circle given its radius.

float radius , circumference;
printf("Enter Radius of Circle: ");
scanf("%f", &radius);

printf("Area of circle is : %f \n", 3.14*radius*radius);
printf("Circumference of circle is : %f \n", 2*3.14*radius);

 return 0;
}






