#include <stdio.h>
# define PI 3.14
double SquareMeter(float fTemp)
{
    return fTemp *0.09203;
  
   
  
}

int main()
{
   int ivalue=0.0f;
   double dRet=0.0;

   printf("Enter area in square feet\n");
   scanf("%d",&ivalue);
   dRet=SquareMeter(ivalue);
  printf(" %f \n",dRet);
  return 0;
}