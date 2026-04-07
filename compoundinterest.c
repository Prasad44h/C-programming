#include<stdio.h>
#include<math.h>
int main()
{
    float principle,time,rate,compoundinterest;

    printf("enter principle:");
    scanf("%f",&principle);
    printf("enter time:");
    scanf("%f",&time);
    printf("enter rate:");
    scanf("%f",&rate);
    compoundinterest = principle* (pow((1 + rate / 100), time));
    printf("the results: %f", compoundinterest);

    return 0;
}