/* C program to calculate diameter, circumference and area of circle */
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
    printf("the perimeter of rectangle: %f units\n", diameter);
    printf("the perimeter of rectangle: %f units\n", circumference);
    printf("the perimeter of rectangle: %f sq. units\n", area);

    return 0;
}