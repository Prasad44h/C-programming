#include<stdio.h>
int main()
{
    float centimeter,meter,kilometer;

    printf("enter the length in centimeter:");
    scanf("%f",&centimeter);
    meter = centimeter/100;
    kilometer = centimeter/100000;
    printf("length in meter:%f m\n",meter);
    printf("length in kilometer:%f km",kilometer);
    return 0;


}