#include <stdio.h>
typedef unsigned int UNIT;
// Off 7 bit and 10 bit 
UNIT Bitoff(UNIT iNO)
{
    UNIT iMask1=0x01;
    UNIT iMask2=0x01;
    iMask1=iMask1<<7-1;
    iMask2=iMask2<<10-1;

    UNIT iMask=~(iMask1 |iMask2);
        // UNIT iMask=(iMask1 |iMask2);
    UNIT iResult=iNO  & iMask;

    return iResult;

}
int main()
{
    int iValue= 0;
    UNIT iRet=0;
    printf("Enter the Number off the  7 &10 bit  :");
    scanf("%d",&iValue);
    iRet=Bitoff(iValue);
    printf("The Result of the Number is %d",iRet);



    



}