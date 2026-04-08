#include<stdio.h>
int main()
{
    double celsius,fahrenheit;
    printf("Enter temperature in fahrenheit:");
    scanf("%lf",&fahrenheit);
    celsius = (fahrenheit - 32) * 5/9 ;
    printf("Temperature in celsius= %lf C",celsius);
    return 0;
}
