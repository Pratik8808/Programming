#include <stdio.h>
int MultFact(int iNo)
{
    int iCnt=0;
    int iFactorRes=1;
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
      if(iNo%iCnt==0)
      {
        iFactorRes=iFactorRes*iCnt;
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

    iRet=MultFact(iValue);

    printf("%d",iRet);
    return 0;
}