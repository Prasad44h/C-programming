/*find the area of rectangle*/
#include<stdio.h>

int main()
{
    float length,width,area;

    printf("enter length:");
    scanf("%f",&length);
    printf("enter width:");
    scanf("%f",&width);
    area = length * width;
    printf("the perimeter of rectangle:: %f sq. units", area);

    return 0;
}