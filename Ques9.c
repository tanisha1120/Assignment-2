#include <stdio.h>

int main() {
    // 9. Write a program to calculate the volume of a cuboid.
    // tanishaSingh
    float length, width, height;
    printf("Enter length, width, and height of the cuboid: ");
    scanf("%f %f %f", &length, &width, &height);

    float volume = length * width * height;
    printf("Volume of the cuboid: %.3f\n", volume);

    return 0;
}
