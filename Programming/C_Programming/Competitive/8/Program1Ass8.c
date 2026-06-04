#include <stdio.h>
# define PI 3.14
float CircleArea(float Radius)
{
   
   return  PI*Radius*Radius; // Time Complexity o(1);
}

int main()
{
   float iValue =0;
   double dRet=0;
   printf("Enter Number \n");
   scanf("%f",&iValue);
   dRet=CircleArea(iValue);
   printf("Even Factorial Of number is %f",dRet);
  
}