#include<stdio.h>
int main()
{
    float celsius,fahreinheit;
    printf("Enter temperature in Celsius:");
    scanf("%f",&celsius);
    fahreinheit = celsius * 9/5 +32;
    printf("Temperature in Fahrenheit = %f F",fahreinheit);
    return 0;
}