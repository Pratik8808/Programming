
#include <stdio.h>
typedef unsigned int UNIT;
// Accept number and off 7 and 10  bit of that  number 
UNIT BitoffFirst4(UNIT iNO)
{
  UNIT iMask1=0x01;
  UNIT iMask2=0x01;
  iMask1=iMask1<<7-1;
  iMask2=iMask2<<10-1;
 

  UNIT iMask=iMask1 | iMask2;
  printf("%b\n",iMask);

  UNIT iResult=(~iMask ) & iNO;


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