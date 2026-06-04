#include <stdio.h>
int SumNonFact(int iNo)
{  if(iNo>=0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    int iFactorRes=0;
   for(iCnt=1;iCnt<=iNo;iCnt++)
    {
      if((iNo%iCnt!=0))
      {
        iFactorRes=iFactorRes+iCnt;
      }

    }
    return iFactorRes;
}

int main ()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);

    printf("%d",iRet);
    return 0;
}