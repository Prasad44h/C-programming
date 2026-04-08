/* C program to calculate diameter,circumference and area of circle */
#include<stdio.h>

int main()
{
    float radius,diameter,circumference,area;
    float pi=3.14;
    printf("enter radius:");
    scanf("%f",&radius);
    diameter = 2 * radius;
    circumference = 2 * pi * radius;
    area = pi * radius*radius;
    printf("Diameter = %.2f units \n", diameter);
    printf("Circumference = %.2f units \n", circumference);
    printf("Area = %.2f sq. units ", area);

    return 0;
}