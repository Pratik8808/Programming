#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef unsigned int  UNIT;
typedef int BOOL;
 // Check bit 15 postion on or off
BOOL ChkBit(UNIT iNo)
{
   UNIT iMask=0x01;
   iMask=iMask<<15-1;
   UNIT Result=iMask & iNo;
   BOOL flag=FALSE;
   if(Result==iMask)
   {
    flag=TRUE;
    
   }
   return flag;

}

int main()
{
  UNIT Value=0;
  UNIT iMask=0x01;
  printf("Enter the Number \n");
  scanf("%d",&Value);
BOOL Result=ChkBit(Value);

if(Result==TRUE)
{

    printf(" Bit is on 15");
}
else 
{
    printf("Bit is off");
}




}