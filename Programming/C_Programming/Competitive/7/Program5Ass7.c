#include <stdio.h>

int OddFactorial(int iNo)
{
    int i=0;
    int iRetodd=1;
    int iRetEven=1;

    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo;i++)
    {
       if(i%2!=0)
       {
          iRetodd=iRetodd*i;
       }
       else if(i%2==0)
       {
        iRetEven=iRetEven*i;
       }
       
    }
    return  iRetEven-iRetodd; // Time Complexity o(n);
}

int main()
{
   int iValue =0;
   int iRet=0;
   printf("Enter Number \n");
   scanf("%d",&iValue);
   iRet=OddFactorial(iValue);
   printf("Even Factorial Of number is %d",iRet);
  
}