#include <stdio.h>
typedef unsigned int UNIT;
// Off 7 bit if on
UNIT Bitoff(UNIT iNO)
{
    UNIT iMask=0x01;
    iMask=iMask<<7-1;

    UNIT iResult=iNO ^ iMask;

    return iResult;

}
int main()
{
    int iValue= 0;
    UNIT iRet=0;
    printf("Enter the Number off the  7  :");
    scanf("%d",&iValue);
    iRet=Bitoff(iValue);
    printf("The Result of the Number is %d",iRet);



    



}