#include<stdio.h>
int main()
{
    float principle,time,rate,simpleinterest;

    printf("enter principle:");
    scanf("%f",&principle);
    printf("enter time:");
    scanf("%f",&time);
    printf("enter rate:");
    scanf("%f",&rate);
    simpleinterest = (principle * time * rate)/100;
    printf("the results: %f", simpleinterest);

    return 0;
}
