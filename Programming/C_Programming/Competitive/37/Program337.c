#include <stdio.h>
typedef unsigned int UNIT;
//Toggle 7 bit 1 or 0 
UNIT Bitoff(UNIT iNO)
{
    UNIT iMask1=0x01;
  
   UNIT  iMask=iMask1<<7-1;


    
        // UNIT iMask=(iMask1 |iMask2);
    UNIT iResult=iNO  ^ iMask;

    return iResult;

}
int main()
{
    int iValue= 0;
    UNIT iRet=0;
    printf("Enter the Number to toggle 7 bit  :");
    scanf("%d",&iValue);
    iRet=Bitoff(iValue);
    printf("The Result of the Number is %d",iRet);



    



}