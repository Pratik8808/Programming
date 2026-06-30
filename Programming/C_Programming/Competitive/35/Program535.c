#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UNIT;

//Check if BIT of  32 and 1 MSB and LSB is on or off
BOOL chk(UNIT iNO)
{
   UNIT iMask1=0x01;
   UNIT iMask2=0x01;

   iMask1=iMask1<<32-1;

   printf("%b \n",iMask1);

   BOOL flag=FALSE;





   UNIT iMask=iMask1 |iMask2;

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
        printf("It bit on 32 and 1 is on");
    }
    else
    {
        printf("All bits are not on ");
    }

}