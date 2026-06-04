/*
Write a  Program which Accept range Form user and display All number in between that range

*/

#include <stdio.h>
void RangeDisplay(int iStart , int iEnd)
{
  int iCnt=iStart;
   for(iCnt=iStart ;iCnt<=iEnd;iCnt++)
   {
    printf("%d \t",iCnt);
   }

}

int main()
{
    int iValue1=0,iValue2=0;
    printf("Enter the Starting Point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);
}