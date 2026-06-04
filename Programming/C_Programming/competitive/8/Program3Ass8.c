#include <stdio.h>
# define PI 3.14
int KMtoMeter(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
  int meter1=1000;
  return meter1*iNo ;
  
}

int main()
{
   int iValue =0;
   int iRet=0;
   printf("Enter Number \n");
   scanf("%d",&iValue);
   iRet=KMtoMeter(iValue);
   printf("%d",iRet);
  
}