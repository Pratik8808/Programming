#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UNIT;

//Check if BIT of  7 & 15 & 21 & 28  is on or not
BOOL chk(UNIT iNO)
{
   UNIT iMask1=0x01;
   UNIT iMask2=0x01;
   UNIT iMask3=0x01;
   UNIT iMask4=0x01;
   BOOL flag=FALSE;

   iMask1=iMask1<<7-1;
   iMask2=iMask2<<15-1;
   iMask3=iMask3<<21-1;
   iMask4=iMask4<<28-1;


   UNIT iMask=iMask1 |iMask2|iMask3|iMask4;

   if((iMask & iNO)==iMask)
   {
    flag=TRUE;
   }
  
   return flag;

}

int main()
{
    UNIT iValue=0;
    printf("Enter the Value \n");
    scanf("%d",&iValue);
    BOOL bRet=chk(iValue);

    if(bRet)
    {
        printf("It bit on 7 15, 21, 28");
    }
    else
    {
        printf("All bits are not on ");
    }

}