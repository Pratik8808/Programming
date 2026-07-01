#include <stdio.h>
typedef unsigned int UNIT;
typedef int BOOL;

// Accept number  and Accept Position from user off the bit and return  modified one
int ChekBitoff(UNIT iNO,int iPos) 
{
  UNIT iMask=0x01;
  iMask=iMask<<iPos-1;

  iMask=~iMask;
  UNIT iResult=iMask & iNO;
 

    return iResult;

}
int main()
{
    int iValue= 0;
    UNIT iRet=0;
    int iPos=0;
    printf("Enter the Number :");
    scanf("%d",&iValue);
    printf("Enter the Bit to check on or off\n");
    scanf("%d",&iPos);
    iRet=ChekBitoff(iValue,iPos);
    
    printf("Updated Number is %d",iRet);


    



}