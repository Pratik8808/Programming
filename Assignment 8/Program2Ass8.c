#include <stdio.h>
# define PI 3.14
float  RectArea(float fWidth,float fHeight)
{
    if(fWidth<0)
    {
        fWidth=-fWidth;
    }
    if(fHeight<0)
    {
        fHeight=-fHeight;
    }
  return fWidth *fHeight;
}


int main()
{
   float fvalue1 =0.0;
   float fvalue2=0.0;
   double dRet=0.0;
   
   printf("Enter Width \n");
   scanf("%f",&fvalue1);
   printf("Enter height \n");
   scanf("%f",&fvalue2);
   dRet=RectArea(fvalue1,fvalue2);
   printf("Even Factorial Of number is %f",dRet);
  
}