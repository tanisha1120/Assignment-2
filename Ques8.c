#include <stdio.h>

int main() {
    // 8. Write a program to calculate Simple Interest.
    // tanishaSingh
    float principal, rate, time;
    printf("Enter principal amount, rate of interest, and time : ");
    scanf("%f %f %f", &principal, &rate, &time);

    float simple_interest = (principal * rate * time) / 100;
    printf("Simple Interest: %.2f\n", simple_interest);

    return 0;
}
