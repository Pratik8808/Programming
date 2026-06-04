#include <stdio.h>
int FactDifft(int iNo)
{
    int iCnt=0;
    int iNonFact=0;
    int iFact=0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
      if((iNo%iCnt)==0)
      {
        iFact=iFact+iCnt;
      }
      else if((iNo%iCnt)!=0){
        iNonFact=iNonFact+iCnt;
      }


    }
    printf("%d <-this is iFact\n",iFact);
      printf("%d <-this is iNonfact \n",iNonFact);

    return iFact-iNonFact;
}

int main ()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet=FactDifft(iValue);

    printf("%d",iRet);

   
    return 0;
}