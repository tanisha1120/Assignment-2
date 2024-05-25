#include <stdio.h>


int circumferenceOfCircle() {
    // 7. Write a program to calculate the circumference of a circle.
    // tanishaSingh
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float circumference = 2 * 3.1415926 * radius;
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}
