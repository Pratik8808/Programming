#include <stdio.h>

int EvenFactorial(int iNo)
{
    int i=0;
    int iRet=1;

    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo;i++)
    {
       if(i%2==0)
       {
          iRet=iRet*i;
       }
       
    }
    return iRet;
}

int main()
{
   int iValue =0;
   int iRet=0;
   printf("Enter Number \n");
   scanf("%d",&iValue);
   iRet=EvenFactorial(iValue);
   printf("Even Factorial Of number is %d",iRet);
  
}