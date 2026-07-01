#include <stdio.h>
typedef unsigned int UNIT;
typedef int BOOL;

// Accept number  and Accept Position from user toggle the bit   and return  modified one
int ToggleBit(UNIT iNO,int iPos) 
{
  UNIT iMask=0x01;
  iMask=iMask<<iPos-1;

//   iMask=iMask |(1<<iPos-1);
  UNIT iResult=iMask ^ iNO;
 

    return iResult;

}
int main()
{
    int iValue= 0;
    UNIT iRet=0;
    int iPos=0;
    printf("Enter the Number :");
    scanf("%d",&iValue);
    printf("Enter the Bit postion to start bit on \n");
    scanf("%d",&iPos);
    iRet=ToggleBit(iValue,iPos);
    
    printf("Updated Number is %d",iRet);


    



}     