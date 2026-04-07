#include<stdio.h>
int main()
{
  int  firstnumber,secondnumber,sum,difference,product;
  float quotient;
  double modulus;
  
  /* take inputs from user */
  printf("enter two numbers:");
  scanf("%d%d",&firstnumber,&secondnumber);
 
  /*perform all arithematic operations*/
  sum = firstnumber + secondnumber;
  difference = firstnumber - secondnumber;
  product = firstnumber * secondnumber;
  quotient = firstnumber/secondnumber;
  modulus = firstnumber%secondnumber;

  /*print all the outputs*/
  printf("SUM:%d\n",sum);
  printf("DIFFERENCE:%d\n",difference);
  printf("PRODUCT:%d\n",product);
  printf("QUOTIENT:%f\n",quotient);
  printf("MODULUS:%lf\n",modulus);
  
  return 0;
  
}