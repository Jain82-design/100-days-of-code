#include <stdio.h>
#include <math.h>

// Q9) Write a program to calculate simple and compound interest for given principal, rate, and time.

int main() {
    double p, r, t, si, ci;

    printf("Principal : ");
    scanf("%lf", &p);

    printf("Rate : ");
    scanf("%lf", &r);

    printf("Time : ");
    scanf("%lf", &t);

    si = (p * r * t) / 100;
    ci = p * (pow(1 + r / 100, t) - 1);

    printf("Simple Interest : %.2f\n", si);
    printf("Compound Interest : %.2f\n", ci);

    // Q10) Write a program to input time in seconds and convert it to hours:minutes:seconds format.

    int a, b, c;
    printf("Time in Seconds : ");
    scanf("%d",&a);

    printf("  %d", a/3600);
    printf(" : %d", (a/60)%60);
    printf(" : %d", a%60);


    return 0;
}