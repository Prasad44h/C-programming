/*find the perimeter of rectangle*/
#include<stdio.h>

int main()
{
    float length,width,perimeter;

    printf("enter length:");
    scanf("%f",&length);
    printf("enter width:");
    scanf("%f",&width);
    perimeter = 2*(length + width);
    printf("the perimeter of rectangle:: %f units", perimeter);

    return 0;
}