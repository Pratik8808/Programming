/*
Write a  Program which Accept range Form user and display All number in between that range 

*/

#include <stdio.h>
int RangeSumEven(int iStart , int iEnd)
{
     if(iStart <=0 || iEnd<=0){

        return -1;
     }
     else if(iStart>=iEnd)
     {
        return -1;
     }
  int iCnt=iStart;
  int iRet=0;
   for(iCnt=iStart ;iCnt<=iEnd;iCnt++)
   {
    
    {

        iRet+=iCnt;
    }

   }
   return iRet;

}

int main()
{
    int iValue1=0,iValue2=0,iRet=0;
    printf("Enter the Starting Point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    iRet=RangeSumEven(iValue1,iValue2);

    if(iRet==-1)
    {
        printf("Invaild range");
    }
    else{

        printf("Addtion is :%d",iRet);
    }
    return 0;
}