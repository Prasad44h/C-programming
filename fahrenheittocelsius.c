#include<stdio.h>
int main()
{
    double celsius,fahreinheit;
    printf("Enter temperature in fahrenheit:");
    scanf("%lf",&fahreinheit);
    celsius = (fahreinheit - 32) * 5/9 ;
    printf("Temperature in celsius= %lf C",celsius);
    return 0;
}