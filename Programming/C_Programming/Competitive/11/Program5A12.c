/*

Write a Program Which Accept Range from User and Display All Numbers in Between that Range in reverse Order
*/

#include <stdio.h>
int RangeDisplayRev(int iStart , int iEnd)
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
   for(iCnt=iEnd ;iCnt>=iStart;iCnt--)
   {
    printf("%d \t",iCnt);

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

    iRet=RangeDisplayRev(iValue1,iValue2);

    if(iRet==-1)
    {
        printf("Invaild range");
    }

    return 0;
}