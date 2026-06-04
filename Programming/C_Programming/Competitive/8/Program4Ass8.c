#include <stdio.h>
# define PI 3.14
double FhtoCs(float fTemp)
{
    return (fTemp-32)*(5.0/9.0);
   
  
}

int main()
{
   float fvalue=0.0f;
   double dRet=0.0;

   printf("Enter the number in temperature\n");
   scanf("%f",&fvalue);
   dRet=FhtoCs(fvalue);
  printf(" The temperature in celsuis is%f \n",dRet);
  return 0;
}