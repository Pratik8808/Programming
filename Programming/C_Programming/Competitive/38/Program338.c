#include <stdio.h>
typedef unsigned int UNIT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

// Accept number  and Accept Position from user and chec 9 and 12 on or off bit 
int chkBit(UNIT iNO) 
{
  UNIT iMask1=0x01;
  UNIT imask2=0x01;
  iMask1=iMask1<<(9-1);
  imask2=imask2<<(12-1);
  BOOL flag=FALSE;

UNIT  iMask=iMask1 |imask2;

if((iMask & iNO)==iMask)
{
  flag=TRUE;
}

  

    return flag;

}
int main()
{
    int iValue= 0;
    UNIT iRet=0;
    BOOL bRet=FALSE;
    printf("Enter the Number :");
    scanf("%d",&iValue);
   
    bRet=chkBit(iValue);

    if(bRet==1)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE ");
    }


    



}