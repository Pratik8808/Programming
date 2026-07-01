
#include <stdio.h>
typedef unsigned int UNIT;
// Accept number and toggle 7  bit of that  number 
UNIT BitoffFirst4(UNIT iNO)
{
  UNIT iMask=0x01;
  iMask=iMask<<7-1;

 


  UNIT iResult=(iMask ) ^  iNO;


    return iResult;

}
int main()
{
    int iValue= 0;
    UNIT iRet=0;
    printf("Enter the Number:");
    scanf("%d",&iValue);
    iRet=BitoffFirst4(iValue);
    printf("The Result of the Number is %d",iRet);



    



}